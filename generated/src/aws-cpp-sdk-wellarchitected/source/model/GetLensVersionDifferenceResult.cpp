/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/GetLensVersionDifferenceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLensVersionDifferenceResult::GetLensVersionDifferenceResult()
{
}

GetLensVersionDifferenceResult::GetLensVersionDifferenceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLensVersionDifferenceResult& GetLensVersionDifferenceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LensAlias"))
  {
    m_lensAlias = jsonValue.GetString("LensAlias");

  }

  if(jsonValue.ValueExists("LensArn"))
  {
    m_lensArn = jsonValue.GetString("LensArn");

  }

  if(jsonValue.ValueExists("BaseLensVersion"))
  {
    m_baseLensVersion = jsonValue.GetString("BaseLensVersion");

  }

  if(jsonValue.ValueExists("TargetLensVersion"))
  {
    m_targetLensVersion = jsonValue.GetString("TargetLensVersion");

  }

  if(jsonValue.ValueExists("LatestLensVersion"))
  {
    m_latestLensVersion = jsonValue.GetString("LatestLensVersion");

  }

  if(jsonValue.ValueExists("VersionDifferences"))
  {
    m_versionDifferences = jsonValue.GetObject("VersionDifferences");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
