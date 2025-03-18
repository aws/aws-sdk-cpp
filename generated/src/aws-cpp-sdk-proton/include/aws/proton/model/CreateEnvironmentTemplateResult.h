/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/EnvironmentTemplate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Proton
{
namespace Model
{
  class CreateEnvironmentTemplateResult
  {
  public:
    AWS_PROTON_API CreateEnvironmentTemplateResult() = default;
    AWS_PROTON_API CreateEnvironmentTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API CreateEnvironmentTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The environment template detail data that's returned by Proton.</p>
     */
    inline const EnvironmentTemplate& GetEnvironmentTemplate() const { return m_environmentTemplate; }
    template<typename EnvironmentTemplateT = EnvironmentTemplate>
    void SetEnvironmentTemplate(EnvironmentTemplateT&& value) { m_environmentTemplateHasBeenSet = true; m_environmentTemplate = std::forward<EnvironmentTemplateT>(value); }
    template<typename EnvironmentTemplateT = EnvironmentTemplate>
    CreateEnvironmentTemplateResult& WithEnvironmentTemplate(EnvironmentTemplateT&& value) { SetEnvironmentTemplate(std::forward<EnvironmentTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateEnvironmentTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EnvironmentTemplate m_environmentTemplate;
    bool m_environmentTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
