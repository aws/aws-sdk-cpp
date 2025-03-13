/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
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
namespace ResourceExplorer2
{
namespace Model
{

  /**
   * <p>A structure that describes a request field with a validation
   * error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/ValidationExceptionField">AWS
   * API Reference</a></p>
   */
  class ValidationExceptionField
  {
  public:
    AWS_RESOURCEEXPLORER2_API ValidationExceptionField() = default;
    AWS_RESOURCEEXPLORER2_API ValidationExceptionField(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API ValidationExceptionField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the request field that had a validation error.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ValidationExceptionField& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation error caused by the request field.</p>
     */
    inline const Aws::String& GetValidationIssue() const { return m_validationIssue; }
    inline bool ValidationIssueHasBeenSet() const { return m_validationIssueHasBeenSet; }
    template<typename ValidationIssueT = Aws::String>
    void SetValidationIssue(ValidationIssueT&& value) { m_validationIssueHasBeenSet = true; m_validationIssue = std::forward<ValidationIssueT>(value); }
    template<typename ValidationIssueT = Aws::String>
    ValidationExceptionField& WithValidationIssue(ValidationIssueT&& value) { SetValidationIssue(std::forward<ValidationIssueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_validationIssue;
    bool m_validationIssueHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
