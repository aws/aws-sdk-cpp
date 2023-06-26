/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Describes which features are activated for the detector. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsGuardDutyDetectorFeaturesDetails">AWS
   * API Reference</a></p>
   */
  class AwsGuardDutyDetectorFeaturesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsGuardDutyDetectorFeaturesDetails();
    AWS_SECURITYHUB_API AwsGuardDutyDetectorFeaturesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsGuardDutyDetectorFeaturesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates the name of the feature that is activated for the detector. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> Indicates the name of the feature that is activated for the detector. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> Indicates the name of the feature that is activated for the detector. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> Indicates the name of the feature that is activated for the detector. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> Indicates the name of the feature that is activated for the detector. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> Indicates the name of the feature that is activated for the detector. </p>
     */
    inline AwsGuardDutyDetectorFeaturesDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> Indicates the name of the feature that is activated for the detector. </p>
     */
    inline AwsGuardDutyDetectorFeaturesDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> Indicates the name of the feature that is activated for the detector. </p>
     */
    inline AwsGuardDutyDetectorFeaturesDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> Indicates the status of the feature that is activated for the detector. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p> Indicates the status of the feature that is activated for the detector. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Indicates the status of the feature that is activated for the detector. </p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Indicates the status of the feature that is activated for the detector. </p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Indicates the status of the feature that is activated for the detector. </p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p> Indicates the status of the feature that is activated for the detector. </p>
     */
    inline AwsGuardDutyDetectorFeaturesDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p> Indicates the status of the feature that is activated for the detector. </p>
     */
    inline AwsGuardDutyDetectorFeaturesDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> Indicates the status of the feature that is activated for the detector. </p>
     */
    inline AwsGuardDutyDetectorFeaturesDetails& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
