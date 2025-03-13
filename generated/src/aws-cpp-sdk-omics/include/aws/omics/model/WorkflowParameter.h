/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>A workflow parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/WorkflowParameter">AWS
   * API Reference</a></p>
   */
  class WorkflowParameter
  {
  public:
    AWS_OMICS_API WorkflowParameter() = default;
    AWS_OMICS_API WorkflowParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API WorkflowParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameter's description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    WorkflowParameter& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the parameter is optional.</p>
     */
    inline bool GetOptional() const { return m_optional; }
    inline bool OptionalHasBeenSet() const { return m_optionalHasBeenSet; }
    inline void SetOptional(bool value) { m_optionalHasBeenSet = true; m_optional = value; }
    inline WorkflowParameter& WithOptional(bool value) { SetOptional(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_optional{false};
    bool m_optionalHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
