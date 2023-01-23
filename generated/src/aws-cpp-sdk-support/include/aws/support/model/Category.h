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
   * <p>A JSON-formatted name/value pair that represents the category name and
   * category code of the problem, selected from the <a>DescribeServices</a> response
   * for each Amazon Web Services service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/Category">AWS
   * API Reference</a></p>
   */
  class Category
  {
  public:
    AWS_SUPPORT_API Category();
    AWS_SUPPORT_API Category(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Category& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The category code for the support case.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The category code for the support case.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The category code for the support case.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The category code for the support case.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The category code for the support case.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The category code for the support case.</p>
     */
    inline Category& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The category code for the support case.</p>
     */
    inline Category& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The category code for the support case.</p>
     */
    inline Category& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The category name for the support case.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The category name for the support case.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The category name for the support case.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The category name for the support case.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The category name for the support case.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The category name for the support case.</p>
     */
    inline Category& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The category name for the support case.</p>
     */
    inline Category& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The category name for the support case.</p>
     */
    inline Category& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
