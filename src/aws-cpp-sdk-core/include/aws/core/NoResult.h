/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
    class XmlDocument;
}
namespace Json
{
    class JsonValue;
}
namespace Cbor
{
    class CborValue;
}
} // namespace Utils

class AWS_CORE_API NoResult
{
public:
    NoResult() {};
    NoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>&) {};
    NoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>&) {};
    NoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>&) {};
    // Raw response body, as kept by smithy::client::RawOutcomeSerializer for schema-serde clients.
    NoResult(const Aws::AmazonWebServiceResult<Aws::String>&) {};
};

} // namespace Aws
