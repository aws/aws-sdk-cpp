/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/HashingUtils.h>
#include <smithy/client/schema/DocumentConversion.h>

namespace smithy {
namespace schema {

std::shared_ptr<const Document> ToSchemaDocument(const Aws::Utils::DocumentView& view) {
  if (view.IsNull()) {
    return Document::Null();
  }
  if (view.IsBool()) {
    return Document::FromBoolean(view.AsBool());
  }
  if (view.IsIntegerType()) {
    return Document::FromInteger(view.AsInt64());
  }
  if (view.IsFloatingPointType()) {
    return Document::FromDouble(view.AsDouble());
  }
  if (view.IsString()) {
    return Document::FromString(view.AsString());
  }
  if (view.IsListType()) {
    auto items = view.AsArray();
    Aws::Vector<std::shared_ptr<const Document>> list;
    list.reserve(items.GetLength());
    for (size_t i = 0; i < items.GetLength(); ++i) {
      list.push_back(ToSchemaDocument(items[i]));
    }
    return Document::FromList(std::move(list));
  }
  if (view.IsObject()) {
    Aws::Map<Aws::String, std::shared_ptr<const Document>> map;
    for (const auto& entry : view.GetAllObjects()) {
      map.emplace(entry.first, ToSchemaDocument(entry.second));
    }
    return Document::FromMap(std::move(map));
  }
  return Document::Null();
}

Aws::Utils::Document ToUtilsDocument(const Document& document) {
  // A JSON null / empty object can't be built through the With*/As* setters (a null member is
  // promoted to {}), so those are parsed from their literal.
  switch (document.GetType()) {
    case ShapeType::Boolean:
      return Aws::Utils::Document().AsBool(document.AsBoolean().value());
    case ShapeType::Integer:
    case ShapeType::Long:
      return Aws::Utils::Document().AsInt64(document.AsLong().value());
    case ShapeType::Double:
      return Aws::Utils::Document().AsDouble(document.AsDouble().value());
    case ShapeType::String:
      return Aws::Utils::Document().AsString(document.AsString().value());
    case ShapeType::Blob:
      return Aws::Utils::Document().AsString(Aws::Utils::HashingUtils::Base64Encode(document.AsBlob().value()));
    case ShapeType::Timestamp:
      return Aws::Utils::Document().AsDouble(document.AsTimestamp().value().SecondsWithMSPrecision());
    case ShapeType::List: {
      const auto items = document.AsList();
      Aws::Utils::Array<Aws::Utils::Document> list(items->size());
      for (size_t i = 0; i < items->size(); ++i) {
        list[i] = ToUtilsDocument(*(*items)[i]);
      }
      return Aws::Utils::Document().AsArray(std::move(list));
    }
    case ShapeType::Map: {
      const auto entries = document.AsMap();
      Aws::Utils::Document object(Aws::String("{}"));
      for (const auto& entry : *entries) {
        object.WithObject(entry.first, ToUtilsDocument(*entry.second));
      }
      return object;
    }
    default:
      return Aws::Utils::Document(Aws::String("null"));
  }
}

}  // namespace schema
}  // namespace smithy
