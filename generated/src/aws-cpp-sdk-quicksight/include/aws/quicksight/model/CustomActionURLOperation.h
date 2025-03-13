/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/URLTargetConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The URL operation that opens a link to another webpage.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomActionURLOperation">AWS
   * API Reference</a></p>
   */
  class CustomActionURLOperation
  {
  public:
    AWS_QUICKSIGHT_API CustomActionURLOperation() = default;
    AWS_QUICKSIGHT_API CustomActionURLOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomActionURLOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>THe URL link of the <code>CustomActionURLOperation</code>.</p>
     */
    inline const Aws::String& GetURLTemplate() const { return m_uRLTemplate; }
    inline bool URLTemplateHasBeenSet() const { return m_uRLTemplateHasBeenSet; }
    template<typename URLTemplateT = Aws::String>
    void SetURLTemplate(URLTemplateT&& value) { m_uRLTemplateHasBeenSet = true; m_uRLTemplate = std::forward<URLTemplateT>(value); }
    template<typename URLTemplateT = Aws::String>
    CustomActionURLOperation& WithURLTemplate(URLTemplateT&& value) { SetURLTemplate(std::forward<URLTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target of the <code>CustomActionURLOperation</code>.</p> <p>Valid values
     * are defined as follows:</p> <ul> <li> <p> <code>NEW_TAB</code>: Opens the target
     * URL in a new browser tab.</p> </li> <li> <p> <code>NEW_WINDOW</code>: Opens the
     * target URL in a new browser window.</p> </li> <li> <p> <code>SAME_TAB</code>:
     * Opens the target URL in the same browser tab.</p> </li> </ul>
     */
    inline URLTargetConfiguration GetURLTarget() const { return m_uRLTarget; }
    inline bool URLTargetHasBeenSet() const { return m_uRLTargetHasBeenSet; }
    inline void SetURLTarget(URLTargetConfiguration value) { m_uRLTargetHasBeenSet = true; m_uRLTarget = value; }
    inline CustomActionURLOperation& WithURLTarget(URLTargetConfiguration value) { SetURLTarget(value); return *this;}
    ///@}
  private:

    Aws::String m_uRLTemplate;
    bool m_uRLTemplateHasBeenSet = false;

    URLTargetConfiguration m_uRLTarget{URLTargetConfiguration::NOT_SET};
    bool m_uRLTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
