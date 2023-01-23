/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/GetReusableDelegationSetLimitRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

GetReusableDelegationSetLimitRequest::GetReusableDelegationSetLimitRequest() : 
    m_type(ReusableDelegationSetLimitType::NOT_SET),
    m_typeHasBeenSet(false),
    m_delegationSetIdHasBeenSet(false)
{
}

Aws::String GetReusableDelegationSetLimitRequest::SerializePayload() const
{
  return {};
}


