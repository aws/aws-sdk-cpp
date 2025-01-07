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
    AWS_SAGEMAKER_API PartnerAppSummary();
    AWS_SAGEMAKER_API PartnerAppSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PartnerAppSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the SageMaker Partner AI App.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline PartnerAppSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline PartnerAppSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline PartnerAppSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SageMaker Partner AI App.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PartnerAppSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PartnerAppSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PartnerAppSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of SageMaker Partner AI App to create. Must be one of the following:
     * <code>lakera-guard</code>, <code>comet</code>,
     * <code>deepchecks-llm-evaluation</code>, or <code>fiddler</code>.</p>
     */
    inline const PartnerAppType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PartnerAppType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PartnerAppType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline PartnerAppSummary& WithType(const PartnerAppType& value) { SetType(value); return *this;}
    inline PartnerAppSummary& WithType(PartnerAppType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the SageMaker Partner AI App.</p>
     */
    inline const PartnerAppStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const PartnerAppStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(PartnerAppStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline PartnerAppSummary& WithStatus(const PartnerAppStatus& value) { SetStatus(value); return *this;}
    inline PartnerAppSummary& WithStatus(PartnerAppStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the SageMaker Partner AI App.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline PartnerAppSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline PartnerAppSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PartnerAppType m_type;
    bool m_typeHasBeenSet = false;

    PartnerAppStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
