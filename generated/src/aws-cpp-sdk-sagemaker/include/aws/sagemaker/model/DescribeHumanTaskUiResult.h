/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HumanTaskUiStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UiTemplateInfo.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeHumanTaskUiResult
  {
  public:
    AWS_SAGEMAKER_API DescribeHumanTaskUiResult() = default;
    AWS_SAGEMAKER_API DescribeHumanTaskUiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeHumanTaskUiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface (worker task
     * template).</p>
     */
    inline const Aws::String& GetHumanTaskUiArn() const { return m_humanTaskUiArn; }
    template<typename HumanTaskUiArnT = Aws::String>
    void SetHumanTaskUiArn(HumanTaskUiArnT&& value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn = std::forward<HumanTaskUiArnT>(value); }
    template<typename HumanTaskUiArnT = Aws::String>
    DescribeHumanTaskUiResult& WithHumanTaskUiArn(HumanTaskUiArnT&& value) { SetHumanTaskUiArn(std::forward<HumanTaskUiArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the human task user interface (worker task template).</p>
     */
    inline const Aws::String& GetHumanTaskUiName() const { return m_humanTaskUiName; }
    template<typename HumanTaskUiNameT = Aws::String>
    void SetHumanTaskUiName(HumanTaskUiNameT&& value) { m_humanTaskUiNameHasBeenSet = true; m_humanTaskUiName = std::forward<HumanTaskUiNameT>(value); }
    template<typename HumanTaskUiNameT = Aws::String>
    DescribeHumanTaskUiResult& WithHumanTaskUiName(HumanTaskUiNameT&& value) { SetHumanTaskUiName(std::forward<HumanTaskUiNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the human task user interface (worker task template). Valid
     * values are listed below.</p>
     */
    inline HumanTaskUiStatus GetHumanTaskUiStatus() const { return m_humanTaskUiStatus; }
    inline void SetHumanTaskUiStatus(HumanTaskUiStatus value) { m_humanTaskUiStatusHasBeenSet = true; m_humanTaskUiStatus = value; }
    inline DescribeHumanTaskUiResult& WithHumanTaskUiStatus(HumanTaskUiStatus value) { SetHumanTaskUiStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the human task user interface was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeHumanTaskUiResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UiTemplateInfo& GetUiTemplate() const { return m_uiTemplate; }
    template<typename UiTemplateT = UiTemplateInfo>
    void SetUiTemplate(UiTemplateT&& value) { m_uiTemplateHasBeenSet = true; m_uiTemplate = std::forward<UiTemplateT>(value); }
    template<typename UiTemplateT = UiTemplateInfo>
    DescribeHumanTaskUiResult& WithUiTemplate(UiTemplateT&& value) { SetUiTemplate(std::forward<UiTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeHumanTaskUiResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_humanTaskUiArn;
    bool m_humanTaskUiArnHasBeenSet = false;

    Aws::String m_humanTaskUiName;
    bool m_humanTaskUiNameHasBeenSet = false;

    HumanTaskUiStatus m_humanTaskUiStatus{HumanTaskUiStatus::NOT_SET};
    bool m_humanTaskUiStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    UiTemplateInfo m_uiTemplate;
    bool m_uiTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
