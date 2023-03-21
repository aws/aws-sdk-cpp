/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/PutTemplateActionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutTemplateActionResult::PutTemplateActionResult() : 
    m_active(false),
    m_category(ActionCategory::NOT_SET),
    m_mustSucceedForCutover(false),
    m_order(0),
    m_timeoutSeconds(0)
{
}

PutTemplateActionResult::PutTemplateActionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_active(false),
    m_category(ActionCategory::NOT_SET),
    m_mustSucceedForCutover(false),
    m_order(0),
    m_timeoutSeconds(0)
{
  *this = result;
}

PutTemplateActionResult& PutTemplateActionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("actionID"))
  {
    m_actionID = jsonValue.GetString("actionID");

  }

  if(jsonValue.ValueExists("actionName"))
  {
    m_actionName = jsonValue.GetString("actionName");

  }

  if(jsonValue.ValueExists("active"))
  {
    m_active = jsonValue.GetBool("active");

  }

  if(jsonValue.ValueExists("category"))
  {
    m_category = ActionCategoryMapper::GetActionCategoryForName(jsonValue.GetString("category"));

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("documentIdentifier"))
  {
    m_documentIdentifier = jsonValue.GetString("documentIdentifier");

  }

  if(jsonValue.ValueExists("documentVersion"))
  {
    m_documentVersion = jsonValue.GetString("documentVersion");

  }

  if(jsonValue.ValueExists("externalParameters"))
  {
    Aws::Map<Aws::String, JsonView> externalParametersJsonMap = jsonValue.GetObject("externalParameters").GetAllObjects();
    for(auto& externalParametersItem : externalParametersJsonMap)
    {
      m_externalParameters[externalParametersItem.first] = externalParametersItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("mustSucceedForCutover"))
  {
    m_mustSucceedForCutover = jsonValue.GetBool("mustSucceedForCutover");

  }

  if(jsonValue.ValueExists("operatingSystem"))
  {
    m_operatingSystem = jsonValue.GetString("operatingSystem");

  }

  if(jsonValue.ValueExists("order"))
  {
    m_order = jsonValue.GetInteger("order");

  }

  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      Aws::Utils::Array<JsonView> ssmParameterStoreParametersJsonList = parametersItem.second.AsArray();
      Aws::Vector<SsmParameterStoreParameter> ssmParameterStoreParametersList;
      ssmParameterStoreParametersList.reserve((size_t)ssmParameterStoreParametersJsonList.GetLength());
      for(unsigned ssmParameterStoreParametersIndex = 0; ssmParameterStoreParametersIndex < ssmParameterStoreParametersJsonList.GetLength(); ++ssmParameterStoreParametersIndex)
      {
        ssmParameterStoreParametersList.push_back(ssmParameterStoreParametersJsonList[ssmParameterStoreParametersIndex].AsObject());
      }
      m_parameters[parametersItem.first] = std::move(ssmParameterStoreParametersList);
    }
  }

  if(jsonValue.ValueExists("timeoutSeconds"))
  {
    m_timeoutSeconds = jsonValue.GetInteger("timeoutSeconds");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
