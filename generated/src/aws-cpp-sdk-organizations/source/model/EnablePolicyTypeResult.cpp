/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/EnablePolicyTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

EnablePolicyTypeResult::EnablePolicyTypeResult()
{
}

EnablePolicyTypeResult::EnablePolicyTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

EnablePolicyTypeResult& EnablePolicyTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Root"))
  {
    m_root = jsonValue.GetObject("Root");

  }



  return *this;
}
