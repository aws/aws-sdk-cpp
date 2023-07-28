/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsAthenaWorkGroupConfigurationDetails.h>
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
   * <p> Provides information about an Amazon Athena workgroup. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAthenaWorkGroupDetails">AWS
   * API Reference</a></p>
   */
  class AwsAthenaWorkGroupDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAthenaWorkGroupDetails();
    AWS_SECURITYHUB_API AwsAthenaWorkGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAthenaWorkGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The workgroup name. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The workgroup name. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The workgroup name. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The workgroup name. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The workgroup name. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The workgroup name. </p>
     */
    inline AwsAthenaWorkGroupDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The workgroup name. </p>
     */
    inline AwsAthenaWorkGroupDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The workgroup name. </p>
     */
    inline AwsAthenaWorkGroupDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The workgroup description. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The workgroup description. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The workgroup description. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The workgroup description. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The workgroup description. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The workgroup description. </p>
     */
    inline AwsAthenaWorkGroupDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The workgroup description. </p>
     */
    inline AwsAthenaWorkGroupDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The workgroup description. </p>
     */
    inline AwsAthenaWorkGroupDetails& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> Whether the workgroup is enabled or disabled. </p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p> Whether the workgroup is enabled or disabled. </p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p> Whether the workgroup is enabled or disabled. </p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p> Whether the workgroup is enabled or disabled. </p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p> Whether the workgroup is enabled or disabled. </p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p> Whether the workgroup is enabled or disabled. </p>
     */
    inline AwsAthenaWorkGroupDetails& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p> Whether the workgroup is enabled or disabled. </p>
     */
    inline AwsAthenaWorkGroupDetails& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p> Whether the workgroup is enabled or disabled. </p>
     */
    inline AwsAthenaWorkGroupDetails& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p> The configuration of the workgroup, which includes the location in Amazon
     * Simple Storage Service (Amazon S3) where query results are stored, the
     * encryption option, if any, used for query results, whether Amazon CloudWatch
     * metrics are enabled for the workgroup, and the limit for the amount of bytes
     * scanned (cutoff) per query, if it is specified. </p>
     */
    inline const AwsAthenaWorkGroupConfigurationDetails& GetConfiguration() const{ return m_configuration; }

    /**
     * <p> The configuration of the workgroup, which includes the location in Amazon
     * Simple Storage Service (Amazon S3) where query results are stored, the
     * encryption option, if any, used for query results, whether Amazon CloudWatch
     * metrics are enabled for the workgroup, and the limit for the amount of bytes
     * scanned (cutoff) per query, if it is specified. </p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p> The configuration of the workgroup, which includes the location in Amazon
     * Simple Storage Service (Amazon S3) where query results are stored, the
     * encryption option, if any, used for query results, whether Amazon CloudWatch
     * metrics are enabled for the workgroup, and the limit for the amount of bytes
     * scanned (cutoff) per query, if it is specified. </p>
     */
    inline void SetConfiguration(const AwsAthenaWorkGroupConfigurationDetails& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p> The configuration of the workgroup, which includes the location in Amazon
     * Simple Storage Service (Amazon S3) where query results are stored, the
     * encryption option, if any, used for query results, whether Amazon CloudWatch
     * metrics are enabled for the workgroup, and the limit for the amount of bytes
     * scanned (cutoff) per query, if it is specified. </p>
     */
    inline void SetConfiguration(AwsAthenaWorkGroupConfigurationDetails&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p> The configuration of the workgroup, which includes the location in Amazon
     * Simple Storage Service (Amazon S3) where query results are stored, the
     * encryption option, if any, used for query results, whether Amazon CloudWatch
     * metrics are enabled for the workgroup, and the limit for the amount of bytes
     * scanned (cutoff) per query, if it is specified. </p>
     */
    inline AwsAthenaWorkGroupDetails& WithConfiguration(const AwsAthenaWorkGroupConfigurationDetails& value) { SetConfiguration(value); return *this;}

    /**
     * <p> The configuration of the workgroup, which includes the location in Amazon
     * Simple Storage Service (Amazon S3) where query results are stored, the
     * encryption option, if any, used for query results, whether Amazon CloudWatch
     * metrics are enabled for the workgroup, and the limit for the amount of bytes
     * scanned (cutoff) per query, if it is specified. </p>
     */
    inline AwsAthenaWorkGroupDetails& WithConfiguration(AwsAthenaWorkGroupConfigurationDetails&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    AwsAthenaWorkGroupConfigurationDetails m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
