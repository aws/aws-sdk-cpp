﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Tags are key-value pairs that can be associated with Step Functions state
   * machines and activities.</p> <p>An array of key-value pairs. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
   * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
   * Management User Guide</i>, and <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
   * Access Using IAM Tags</a>.</p> <p>Tags may only contain Unicode letters, digits,
   * white space, or these symbols: <code>_ . : / = + - @</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_SFN_API Tag();
    AWS_SFN_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of a tag.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of a tag.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
