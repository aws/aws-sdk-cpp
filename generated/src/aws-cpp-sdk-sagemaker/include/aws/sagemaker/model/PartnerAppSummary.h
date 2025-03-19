/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/PartnerAppType.h>
#include <aws/sagemaker/model/PartnerAppStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A subset of information related to a SageMaker Partner AI App. This
   * information is used as part of the <code>ListPartnerApps</code> API
   * response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PartnerAppSummary">AWS
   * API Reference</a></p>
   */
  class PartnerAppSummary
  {
  public:
    AWS_SAGEMAKER_API PartnerAppSummary() = default;
    AWS_SAGEMAKER_API PartnerAppSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PartnerAppSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the SageMaker Partner AI App.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    PartnerAppSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SageMaker Partner AI App.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PartnerAppSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of SageMaker Partner AI App to create. Must be one of the following:
     * <code>lakera-guard</code>, <code>comet</code>,
     * <code>deepchecks-llm-evaluation</code>, or <code>fiddler</code>.</p>
     */
    inline PartnerAppType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PartnerAppType value) { m_typeHasBeenSet = true; m_type = value; }
    inline PartnerAppSummary& WithType(PartnerAppType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the SageMaker Partner AI App.</p>
     */
    inline PartnerAppStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PartnerAppStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PartnerAppSummary& WithStatus(PartnerAppStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the SageMaker Partner AI App.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    PartnerAppSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PartnerAppType m_type{PartnerAppType::NOT_SET};
    bool m_typeHasBeenSet = false;

    PartnerAppStatus m_status{PartnerAppStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
