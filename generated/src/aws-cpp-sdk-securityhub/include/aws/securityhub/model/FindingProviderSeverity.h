﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/SeverityLabel.h>
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
   * <p>The severity assigned to the finding by the finding provider.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FindingProviderSeverity">AWS
   * API Reference</a></p>
   */
  class FindingProviderSeverity
  {
  public:
    AWS_SECURITYHUB_API FindingProviderSeverity();
    AWS_SECURITYHUB_API FindingProviderSeverity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API FindingProviderSeverity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The severity label assigned to the finding by the finding provider.</p>
     */
    inline const SeverityLabel& GetLabel() const{ return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    inline void SetLabel(const SeverityLabel& value) { m_labelHasBeenSet = true; m_label = value; }
    inline void SetLabel(SeverityLabel&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }
    inline FindingProviderSeverity& WithLabel(const SeverityLabel& value) { SetLabel(value); return *this;}
    inline FindingProviderSeverity& WithLabel(SeverityLabel&& value) { SetLabel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding provider's original value for the severity.</p> <p>Length
     * Constraints: Minimum length of 1. Maximum length of 64.</p>
     */
    inline const Aws::String& GetOriginal() const{ return m_original; }
    inline bool OriginalHasBeenSet() const { return m_originalHasBeenSet; }
    inline void SetOriginal(const Aws::String& value) { m_originalHasBeenSet = true; m_original = value; }
    inline void SetOriginal(Aws::String&& value) { m_originalHasBeenSet = true; m_original = std::move(value); }
    inline void SetOriginal(const char* value) { m_originalHasBeenSet = true; m_original.assign(value); }
    inline FindingProviderSeverity& WithOriginal(const Aws::String& value) { SetOriginal(value); return *this;}
    inline FindingProviderSeverity& WithOriginal(Aws::String&& value) { SetOriginal(std::move(value)); return *this;}
    inline FindingProviderSeverity& WithOriginal(const char* value) { SetOriginal(value); return *this;}
    ///@}
  private:

    SeverityLabel m_label;
    bool m_labelHasBeenSet = false;

    Aws::String m_original;
    bool m_originalHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
