/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>Defines a Neptune ML resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/MlResourceDefinition">AWS
   * API Reference</a></p>
   */
  class MlResourceDefinition
  {
  public:
    AWS_NEPTUNEDATA_API MlResourceDefinition();
    AWS_NEPTUNEDATA_API MlResourceDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API MlResourceDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MlResourceDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MlResourceDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MlResourceDefinition& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline MlResourceDefinition& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline MlResourceDefinition& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline MlResourceDefinition& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource status.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline MlResourceDefinition& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline MlResourceDefinition& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline MlResourceDefinition& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output location.</p>
     */
    inline const Aws::String& GetOutputLocation() const{ return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    inline void SetOutputLocation(const Aws::String& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }
    inline void SetOutputLocation(Aws::String&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }
    inline void SetOutputLocation(const char* value) { m_outputLocationHasBeenSet = true; m_outputLocation.assign(value); }
    inline MlResourceDefinition& WithOutputLocation(const Aws::String& value) { SetOutputLocation(value); return *this;}
    inline MlResourceDefinition& WithOutputLocation(Aws::String&& value) { SetOutputLocation(std::move(value)); return *this;}
    inline MlResourceDefinition& WithOutputLocation(const char* value) { SetOutputLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure reason, in case of a failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline MlResourceDefinition& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline MlResourceDefinition& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline MlResourceDefinition& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch log URL for the resource.</p>
     */
    inline const Aws::String& GetCloudwatchLogUrl() const{ return m_cloudwatchLogUrl; }
    inline bool CloudwatchLogUrlHasBeenSet() const { return m_cloudwatchLogUrlHasBeenSet; }
    inline void SetCloudwatchLogUrl(const Aws::String& value) { m_cloudwatchLogUrlHasBeenSet = true; m_cloudwatchLogUrl = value; }
    inline void SetCloudwatchLogUrl(Aws::String&& value) { m_cloudwatchLogUrlHasBeenSet = true; m_cloudwatchLogUrl = std::move(value); }
    inline void SetCloudwatchLogUrl(const char* value) { m_cloudwatchLogUrlHasBeenSet = true; m_cloudwatchLogUrl.assign(value); }
    inline MlResourceDefinition& WithCloudwatchLogUrl(const Aws::String& value) { SetCloudwatchLogUrl(value); return *this;}
    inline MlResourceDefinition& WithCloudwatchLogUrl(Aws::String&& value) { SetCloudwatchLogUrl(std::move(value)); return *this;}
    inline MlResourceDefinition& WithCloudwatchLogUrl(const char* value) { SetCloudwatchLogUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_cloudwatchLogUrl;
    bool m_cloudwatchLogUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
