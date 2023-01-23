/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PutParameterResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutParameterResult::PutParameterResult() : 
    m_version(0),
    m_tier(ParameterTier::NOT_SET)
{
}

PutParameterResult::PutParameterResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_version(0),
    m_tier(ParameterTier::NOT_SET)
{
  *this = result;
}

PutParameterResult& PutParameterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInt64("Version");

  }

  if(jsonValue.ValueExists("Tier"))
  {
    m_tier = ParameterTierMapper::GetParameterTierForName(jsonValue.GetString("Tier"));

  }



  return *this;
}
