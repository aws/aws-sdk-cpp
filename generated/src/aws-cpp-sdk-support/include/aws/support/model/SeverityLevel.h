/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>A code and name pair that represents the severity level of a support case.
   * The available values depend on the support plan for the account. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/awssupport/latest/user/case-management.html#choosing-severity">Choosing
   * a severity</a> in the <i>Amazon Web Services Support User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/SeverityLevel">AWS
   * API Reference</a></p>
   */
  class SeverityLevel
  {
  public:
    AWS_SUPPORT_API SeverityLevel();
    AWS_SUPPORT_API SeverityLevel(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API SeverityLevel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The code for case severity level.</p> <p>Valid values: <code>low</code> |
     * <code>normal</code> | <code>high</code> | <code>urgent</code> |
     * <code>critical</code> </p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The code for case severity level.</p> <p>Valid values: <code>low</code> |
     * <code>normal</code> | <code>high</code> | <code>urgent</code> |
     * <code>critical</code> </p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The code for case severity level.</p> <p>Valid values: <code>low</code> |
     * <code>normal</code> | <code>high</code> | <code>urgent</code> |
     * <code>critical</code> </p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The code for case severity level.</p> <p>Valid values: <code>low</code> |
     * <code>normal</code> | <code>high</code> | <code>urgent</code> |
     * <code>critical</code> </p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The code for case severity level.</p> <p>Valid values: <code>low</code> |
     * <code>normal</code> | <code>high</code> | <code>urgent</code> |
     * <code>critical</code> </p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The code for case severity level.</p> <p>Valid values: <code>low</code> |
     * <code>normal</code> | <code>high</code> | <code>urgent</code> |
     * <code>critical</code> </p>
     */
    inline SeverityLevel& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The code for case severity level.</p> <p>Valid values: <code>low</code> |
     * <code>normal</code> | <code>high</code> | <code>urgent</code> |
     * <code>critical</code> </p>
     */
    inline SeverityLevel& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The code for case severity level.</p> <p>Valid values: <code>low</code> |
     * <code>normal</code> | <code>high</code> | <code>urgent</code> |
     * <code>critical</code> </p>
     */
    inline SeverityLevel& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The name of the severity level that corresponds to the severity level
     * code.</p>  <p>The values returned by the API are different from the values
     * that appear in the Amazon Web Services Support Center. For example, the API uses
     * the code <code>low</code>, but the name appears as General guidance in Support
     * Center. </p> <p>The following are the API code names and how they appear in the
     * console:</p> <ul> <li> <p> <code>low</code> - General guidance</p> </li> <li>
     * <p> <code>normal</code> - System impaired</p> </li> <li> <p> <code>high</code> -
     * Production system impaired</p> </li> <li> <p> <code>urgent</code> - Production
     * system down</p> </li> <li> <p> <code>critical</code> - Business-critical system
     * down</p> </li> </ul>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/case-management.html#choosing-severity">Choosing
     * a severity</a> in the <i>Amazon Web Services Support User Guide</i>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the severity level that corresponds to the severity level
     * code.</p>  <p>The values returned by the API are different from the values
     * that appear in the Amazon Web Services Support Center. For example, the API uses
     * the code <code>low</code>, but the name appears as General guidance in Support
     * Center. </p> <p>The following are the API code names and how they appear in the
     * console:</p> <ul> <li> <p> <code>low</code> - General guidance</p> </li> <li>
     * <p> <code>normal</code> - System impaired</p> </li> <li> <p> <code>high</code> -
     * Production system impaired</p> </li> <li> <p> <code>urgent</code> - Production
     * system down</p> </li> <li> <p> <code>critical</code> - Business-critical system
     * down</p> </li> </ul>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/case-management.html#choosing-severity">Choosing
     * a severity</a> in the <i>Amazon Web Services Support User Guide</i>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the severity level that corresponds to the severity level
     * code.</p>  <p>The values returned by the API are different from the values
     * that appear in the Amazon Web Services Support Center. For example, the API uses
     * the code <code>low</code>, but the name appears as General guidance in Support
     * Center. </p> <p>The following are the API code names and how they appear in the
     * console:</p> <ul> <li> <p> <code>low</code> - General guidance</p> </li> <li>
     * <p> <code>normal</code> - System impaired</p> </li> <li> <p> <code>high</code> -
     * Production system impaired</p> </li> <li> <p> <code>urgent</code> - Production
     * system down</p> </li> <li> <p> <code>critical</code> - Business-critical system
     * down</p> </li> </ul>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/case-management.html#choosing-severity">Choosing
     * a severity</a> in the <i>Amazon Web Services Support User Guide</i>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the severity level that corresponds to the severity level
     * code.</p>  <p>The values returned by the API are different from the values
     * that appear in the Amazon Web Services Support Center. For example, the API uses
     * the code <code>low</code>, but the name appears as General guidance in Support
     * Center. </p> <p>The following are the API code names and how they appear in the
     * console:</p> <ul> <li> <p> <code>low</code> - General guidance</p> </li> <li>
     * <p> <code>normal</code> - System impaired</p> </li> <li> <p> <code>high</code> -
     * Production system impaired</p> </li> <li> <p> <code>urgent</code> - Production
     * system down</p> </li> <li> <p> <code>critical</code> - Business-critical system
     * down</p> </li> </ul>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/case-management.html#choosing-severity">Choosing
     * a severity</a> in the <i>Amazon Web Services Support User Guide</i>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the severity level that corresponds to the severity level
     * code.</p>  <p>The values returned by the API are different from the values
     * that appear in the Amazon Web Services Support Center. For example, the API uses
     * the code <code>low</code>, but the name appears as General guidance in Support
     * Center. </p> <p>The following are the API code names and how they appear in the
     * console:</p> <ul> <li> <p> <code>low</code> - General guidance</p> </li> <li>
     * <p> <code>normal</code> - System impaired</p> </li> <li> <p> <code>high</code> -
     * Production system impaired</p> </li> <li> <p> <code>urgent</code> - Production
     * system down</p> </li> <li> <p> <code>critical</code> - Business-critical system
     * down</p> </li> </ul>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/case-management.html#choosing-severity">Choosing
     * a severity</a> in the <i>Amazon Web Services Support User Guide</i>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the severity level that corresponds to the severity level
     * code.</p>  <p>The values returned by the API are different from the values
     * that appear in the Amazon Web Services Support Center. For example, the API uses
     * the code <code>low</code>, but the name appears as General guidance in Support
     * Center. </p> <p>The following are the API code names and how they appear in the
     * console:</p> <ul> <li> <p> <code>low</code> - General guidance</p> </li> <li>
     * <p> <code>normal</code> - System impaired</p> </li> <li> <p> <code>high</code> -
     * Production system impaired</p> </li> <li> <p> <code>urgent</code> - Production
     * system down</p> </li> <li> <p> <code>critical</code> - Business-critical system
     * down</p> </li> </ul>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/case-management.html#choosing-severity">Choosing
     * a severity</a> in the <i>Amazon Web Services Support User Guide</i>.</p>
     */
    inline SeverityLevel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the severity level that corresponds to the severity level
     * code.</p>  <p>The values returned by the API are different from the values
     * that appear in the Amazon Web Services Support Center. For example, the API uses
     * the code <code>low</code>, but the name appears as General guidance in Support
     * Center. </p> <p>The following are the API code names and how they appear in the
     * console:</p> <ul> <li> <p> <code>low</code> - General guidance</p> </li> <li>
     * <p> <code>normal</code> - System impaired</p> </li> <li> <p> <code>high</code> -
     * Production system impaired</p> </li> <li> <p> <code>urgent</code> - Production
     * system down</p> </li> <li> <p> <code>critical</code> - Business-critical system
     * down</p> </li> </ul>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/case-management.html#choosing-severity">Choosing
     * a severity</a> in the <i>Amazon Web Services Support User Guide</i>.</p>
     */
    inline SeverityLevel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the severity level that corresponds to the severity level
     * code.</p>  <p>The values returned by the API are different from the values
     * that appear in the Amazon Web Services Support Center. For example, the API uses
     * the code <code>low</code>, but the name appears as General guidance in Support
     * Center. </p> <p>The following are the API code names and how they appear in the
     * console:</p> <ul> <li> <p> <code>low</code> - General guidance</p> </li> <li>
     * <p> <code>normal</code> - System impaired</p> </li> <li> <p> <code>high</code> -
     * Production system impaired</p> </li> <li> <p> <code>urgent</code> - Production
     * system down</p> </li> <li> <p> <code>critical</code> - Business-critical system
     * down</p> </li> </ul>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/case-management.html#choosing-severity">Choosing
     * a severity</a> in the <i>Amazon Web Services Support User Guide</i>.</p>
     */
    inline SeverityLevel& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
