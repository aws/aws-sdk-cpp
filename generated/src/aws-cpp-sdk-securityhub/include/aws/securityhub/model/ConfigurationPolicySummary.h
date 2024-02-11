/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> An object that contains the details of an Security Hub configuration policy
   * that’s returned in a <code>ListConfigurationPolicies</code> request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ConfigurationPolicySummary">AWS
   * API Reference</a></p>
   */
  class ConfigurationPolicySummary
  {
  public:
    AWS_SECURITYHUB_API ConfigurationPolicySummary();
    AWS_SECURITYHUB_API ConfigurationPolicySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ConfigurationPolicySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the configuration policy. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the configuration policy. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the configuration policy. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the configuration policy. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the configuration policy. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the configuration policy. </p>
     */
    inline ConfigurationPolicySummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the configuration policy. </p>
     */
    inline ConfigurationPolicySummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the configuration policy. </p>
     */
    inline ConfigurationPolicySummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The universally unique identifier (UUID) of the configuration policy. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The universally unique identifier (UUID) of the configuration policy. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The universally unique identifier (UUID) of the configuration policy. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The universally unique identifier (UUID) of the configuration policy. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The universally unique identifier (UUID) of the configuration policy. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The universally unique identifier (UUID) of the configuration policy. </p>
     */
    inline ConfigurationPolicySummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The universally unique identifier (UUID) of the configuration policy. </p>
     */
    inline ConfigurationPolicySummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The universally unique identifier (UUID) of the configuration policy. </p>
     */
    inline ConfigurationPolicySummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline ConfigurationPolicySummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline ConfigurationPolicySummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline ConfigurationPolicySummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The description of the configuration policy. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the configuration policy. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the configuration policy. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the configuration policy. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the configuration policy. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the configuration policy. </p>
     */
    inline ConfigurationPolicySummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the configuration policy. </p>
     */
    inline ConfigurationPolicySummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the configuration policy. </p>
     */
    inline ConfigurationPolicySummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The date and time, in UTC and ISO 8601 format, that the configuration policy
     * was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p> The date and time, in UTC and ISO 8601 format, that the configuration policy
     * was last updated. </p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p> The date and time, in UTC and ISO 8601 format, that the configuration policy
     * was last updated. </p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p> The date and time, in UTC and ISO 8601 format, that the configuration policy
     * was last updated. </p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p> The date and time, in UTC and ISO 8601 format, that the configuration policy
     * was last updated. </p>
     */
    inline ConfigurationPolicySummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p> The date and time, in UTC and ISO 8601 format, that the configuration policy
     * was last updated. </p>
     */
    inline ConfigurationPolicySummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p> Indicates whether the service that the configuration policy applies to is
     * enabled in the policy. </p>
     */
    inline bool GetServiceEnabled() const{ return m_serviceEnabled; }

    /**
     * <p> Indicates whether the service that the configuration policy applies to is
     * enabled in the policy. </p>
     */
    inline bool ServiceEnabledHasBeenSet() const { return m_serviceEnabledHasBeenSet; }

    /**
     * <p> Indicates whether the service that the configuration policy applies to is
     * enabled in the policy. </p>
     */
    inline void SetServiceEnabled(bool value) { m_serviceEnabledHasBeenSet = true; m_serviceEnabled = value; }

    /**
     * <p> Indicates whether the service that the configuration policy applies to is
     * enabled in the policy. </p>
     */
    inline ConfigurationPolicySummary& WithServiceEnabled(bool value) { SetServiceEnabled(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    bool m_serviceEnabled;
    bool m_serviceEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
