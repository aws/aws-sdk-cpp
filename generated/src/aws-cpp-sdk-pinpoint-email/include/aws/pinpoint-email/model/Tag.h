﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that defines the tags that are associated with a resource.
   * A <i>tag</i> is a label that you optionally define and associate with a resource
   * in Amazon Pinpoint. Tags can help you categorize and manage resources in
   * different ways, such as by purpose, owner, environment, or other criteria. A
   * resource can have as many as 50 tags.</p> <p>Each tag consists of a
   * required <i>tag key</i> and an associated <i>tag value</i>, both of which you
   * define. A tag key is a general label that acts as a category for a more specific
   * tag value. A tag value acts as a descriptor within a tag key. A tag key can
   * contain as many as 128 characters. A tag value can contain as many as 256
   * characters. The characters can be Unicode letters, digits, white space, or one
   * of the following symbols: _ . : / = + -. The following additional restrictions
   * apply to tags:</p> <ul> <li> <p>Tag keys and values are case sensitive.</p>
   * </li> <li> <p>For each associated resource, each tag key must be unique and it
   * can have only one value.</p> </li> <li> <p>The <code>aws:</code> prefix is
   * reserved for use by AWS; you can’t use it in any tag keys or values that you
   * define. In addition, you can't edit or remove tag keys or values that use this
   * prefix. Tags that use this prefix don’t count against the limit of 50 tags per
   * resource.</p> </li> <li> <p>You can associate tags with public or shared
   * resources, but the tags are available only for your AWS account, not any other
   * accounts that share the resource. In addition, the tags are available only for
   * resources that are located in the specified AWS Region for your AWS account.</p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/Tag">AWS
   * API Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_PINPOINTEMAIL_API Tag() = default;
    AWS_PINPOINTEMAIL_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One part of a key-value pair that defines a tag. The maximum length of a tag
     * key is 128 characters. The minimum length is 1 character.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    Tag& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional part of a key-value pair that defines a tag. The maximum length
     * of a tag value is 256 characters. The minimum length is 0 characters. If you
     * don’t want a resource to have a specific tag value, don’t specify a value for
     * this parameter. Amazon Pinpoint will set the value to an empty string.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Tag& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
