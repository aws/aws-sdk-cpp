/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/StandardsManagedBy.h>
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
   * <p>Provides information about a specific security standard.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Standard">AWS
   * API Reference</a></p>
   */
  class Standard
  {
  public:
    AWS_SECURITYHUB_API Standard();
    AWS_SECURITYHUB_API Standard(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Standard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of a standard.</p>
     */
    inline const Aws::String& GetStandardsArn() const{ return m_standardsArn; }
    inline bool StandardsArnHasBeenSet() const { return m_standardsArnHasBeenSet; }
    inline void SetStandardsArn(const Aws::String& value) { m_standardsArnHasBeenSet = true; m_standardsArn = value; }
    inline void SetStandardsArn(Aws::String&& value) { m_standardsArnHasBeenSet = true; m_standardsArn = std::move(value); }
    inline void SetStandardsArn(const char* value) { m_standardsArnHasBeenSet = true; m_standardsArn.assign(value); }
    inline Standard& WithStandardsArn(const Aws::String& value) { SetStandardsArn(value); return *this;}
    inline Standard& WithStandardsArn(Aws::String&& value) { SetStandardsArn(std::move(value)); return *this;}
    inline Standard& WithStandardsArn(const char* value) { SetStandardsArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the standard.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Standard& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Standard& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Standard& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the standard.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Standard& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Standard& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Standard& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the standard is enabled by default. When Security Hub is enabled from
     * the console, if a standard is enabled by default, the check box for that
     * standard is selected by default.</p> <p>When Security Hub is enabled using the
     * <code>EnableSecurityHub</code> API operation, the standard is enabled by default
     * unless <code>EnableDefaultStandards</code> is set to <code>false</code>.</p>
     */
    inline bool GetEnabledByDefault() const{ return m_enabledByDefault; }
    inline bool EnabledByDefaultHasBeenSet() const { return m_enabledByDefaultHasBeenSet; }
    inline void SetEnabledByDefault(bool value) { m_enabledByDefaultHasBeenSet = true; m_enabledByDefault = value; }
    inline Standard& WithEnabledByDefault(bool value) { SetEnabledByDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about the management of a standard. </p>
     */
    inline const StandardsManagedBy& GetStandardsManagedBy() const{ return m_standardsManagedBy; }
    inline bool StandardsManagedByHasBeenSet() const { return m_standardsManagedByHasBeenSet; }
    inline void SetStandardsManagedBy(const StandardsManagedBy& value) { m_standardsManagedByHasBeenSet = true; m_standardsManagedBy = value; }
    inline void SetStandardsManagedBy(StandardsManagedBy&& value) { m_standardsManagedByHasBeenSet = true; m_standardsManagedBy = std::move(value); }
    inline Standard& WithStandardsManagedBy(const StandardsManagedBy& value) { SetStandardsManagedBy(value); return *this;}
    inline Standard& WithStandardsManagedBy(StandardsManagedBy&& value) { SetStandardsManagedBy(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_standardsArn;
    bool m_standardsArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_enabledByDefault;
    bool m_enabledByDefaultHasBeenSet = false;

    StandardsManagedBy m_standardsManagedBy;
    bool m_standardsManagedByHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
