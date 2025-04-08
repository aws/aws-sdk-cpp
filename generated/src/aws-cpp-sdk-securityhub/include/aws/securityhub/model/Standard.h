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
    AWS_SECURITYHUB_API Standard() = default;
    AWS_SECURITYHUB_API Standard(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Standard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the standard.</p>
     */
    inline const Aws::String& GetStandardsArn() const { return m_standardsArn; }
    inline bool StandardsArnHasBeenSet() const { return m_standardsArnHasBeenSet; }
    template<typename StandardsArnT = Aws::String>
    void SetStandardsArn(StandardsArnT&& value) { m_standardsArnHasBeenSet = true; m_standardsArn = std::forward<StandardsArnT>(value); }
    template<typename StandardsArnT = Aws::String>
    Standard& WithStandardsArn(StandardsArnT&& value) { SetStandardsArn(std::forward<StandardsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the standard.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Standard& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the standard.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Standard& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the standard is enabled by default. When Security Hub is enabled from
     * the console, if a standard is enabled by default, the check box for that
     * standard is selected by default.</p> <p>When Security Hub is enabled using the
     * <code>EnableSecurityHub</code> API operation, the standard is enabled by default
     * unless <code>EnableDefaultStandards</code> is set to <code>false</code>.</p>
     */
    inline bool GetEnabledByDefault() const { return m_enabledByDefault; }
    inline bool EnabledByDefaultHasBeenSet() const { return m_enabledByDefaultHasBeenSet; }
    inline void SetEnabledByDefault(bool value) { m_enabledByDefaultHasBeenSet = true; m_enabledByDefault = value; }
    inline Standard& WithEnabledByDefault(bool value) { SetEnabledByDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about the management of a standard. </p>
     */
    inline const StandardsManagedBy& GetStandardsManagedBy() const { return m_standardsManagedBy; }
    inline bool StandardsManagedByHasBeenSet() const { return m_standardsManagedByHasBeenSet; }
    template<typename StandardsManagedByT = StandardsManagedBy>
    void SetStandardsManagedBy(StandardsManagedByT&& value) { m_standardsManagedByHasBeenSet = true; m_standardsManagedBy = std::forward<StandardsManagedByT>(value); }
    template<typename StandardsManagedByT = StandardsManagedBy>
    Standard& WithStandardsManagedBy(StandardsManagedByT&& value) { SetStandardsManagedBy(std::forward<StandardsManagedByT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_standardsArn;
    bool m_standardsArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_enabledByDefault{false};
    bool m_enabledByDefaultHasBeenSet = false;

    StandardsManagedBy m_standardsManagedBy;
    bool m_standardsManagedByHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
