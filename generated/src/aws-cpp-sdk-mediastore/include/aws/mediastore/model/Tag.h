﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
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
namespace MediaStore
{
namespace Model
{

  /**
   * <p>A collection of tags associated with a container. Each tag consists of a
   * key:value pair, which can be anything you define. Typically, the tag key
   * represents a category (such as "environment") and the tag value represents a
   * specific value within that category (such as "test," "development," or
   * "production"). You can add up to 50 tags to each container. For more information
   * about tagging, including naming and usage conventions, see <a
   * href="https://docs.aws.amazon.com/mediastore/latest/ug/tagging.html">Tagging
   * Resources in MediaStore</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_MEDIASTORE_API Tag() = default;
    AWS_MEDIASTORE_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIASTORE_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIASTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag key to
     * describe a category of information, such as "customer." Tag keys are
     * case-sensitive.</p>
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
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive.</p>
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
} // namespace MediaStore
} // namespace Aws
