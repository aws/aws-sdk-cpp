/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>
#include <smithy/client/schema/Trait.h>
#include <smithy/client/schema/TraitKey.h>

namespace smithy {
namespace schema {

class XmlNameTrait : public Trait {
 public:
  explicit XmlNameTrait(const Aws::String& value) : m_value(value) {}
  const Aws::String& GetValue() const { return m_value; }
  static const TraitKey<XmlNameTrait>& KEY() { return TraitKey<XmlNameTrait>::Instance(); }

 private:
  Aws::String m_value;
};

class XmlFlattenedTrait : public Trait {
 public:
  static const TraitKey<XmlFlattenedTrait>& KEY() { return TraitKey<XmlFlattenedTrait>::Instance(); }
};

class XmlAttributeTrait : public Trait {
 public:
  static const TraitKey<XmlAttributeTrait>& KEY() { return TraitKey<XmlAttributeTrait>::Instance(); }
};

class XmlNamespaceTrait : public Trait {
 public:
  XmlNamespaceTrait(const Aws::String& uri, const Aws::String& prefix = "") : m_uri(uri), m_prefix(prefix) {}
  const Aws::String& GetUri() const { return m_uri; }
  const Aws::String& GetPrefix() const { return m_prefix; }
  static const TraitKey<XmlNamespaceTrait>& KEY() { return TraitKey<XmlNamespaceTrait>::Instance(); }

 private:
  Aws::String m_uri;
  Aws::String m_prefix;
};

class XmlListItemNameTrait : public Trait {
 public:
  explicit XmlListItemNameTrait(const Aws::String& value) : m_value(value) {}
  const Aws::String& GetValue() const { return m_value; }
  static const TraitKey<XmlListItemNameTrait>& KEY() { return TraitKey<XmlListItemNameTrait>::Instance(); }

 private:
  Aws::String m_value;
};

class XmlMapEntryNameTrait : public Trait {
 public:
  explicit XmlMapEntryNameTrait(const Aws::String& value) : m_value(value) {}
  const Aws::String& GetValue() const { return m_value; }
  static const TraitKey<XmlMapEntryNameTrait>& KEY() { return TraitKey<XmlMapEntryNameTrait>::Instance(); }

 private:
  Aws::String m_value;
};

class XmlMapKeyNameTrait : public Trait {
 public:
  explicit XmlMapKeyNameTrait(const Aws::String& value) : m_value(value) {}
  const Aws::String& GetValue() const { return m_value; }
  static const TraitKey<XmlMapKeyNameTrait>& KEY() { return TraitKey<XmlMapKeyNameTrait>::Instance(); }

 private:
  Aws::String m_value;
};

class XmlMapValueNameTrait : public Trait {
 public:
  explicit XmlMapValueNameTrait(const Aws::String& value) : m_value(value) {}
  const Aws::String& GetValue() const { return m_value; }
  static const TraitKey<XmlMapValueNameTrait>& KEY() { return TraitKey<XmlMapValueNameTrait>::Instance(); }

 private:
  Aws::String m_value;
};

}  // namespace schema
}  // namespace smithy
