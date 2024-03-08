/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The list of key-value pairs used to filter your search results. If a search
   * result contains a key from your list, it is included in the final search
   * response if the value associated with the key in the result matches the value
   * you specified. If the value doesn't match, the result is excluded from the
   * search response. Any resources that don't have a key from the list that you've
   * provided will also be included in the search response.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/VisibilityConditions">AWS
   * API Reference</a></p>
   */
  class VisibilityConditions
  {
  public:
    AWS_SAGEMAKER_API VisibilityConditions();
    AWS_SAGEMAKER_API VisibilityConditions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API VisibilityConditions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key that specifies the tag that you're using to filter the search
     * results. It must be in the following format: <code>Tags.&lt;key&gt;</code>.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key that specifies the tag that you're using to filter the search
     * results. It must be in the following format: <code>Tags.&lt;key&gt;</code>.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key that specifies the tag that you're using to filter the search
     * results. It must be in the following format: <code>Tags.&lt;key&gt;</code>.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key that specifies the tag that you're using to filter the search
     * results. It must be in the following format: <code>Tags.&lt;key&gt;</code>.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key that specifies the tag that you're using to filter the search
     * results. It must be in the following format: <code>Tags.&lt;key&gt;</code>.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key that specifies the tag that you're using to filter the search
     * results. It must be in the following format: <code>Tags.&lt;key&gt;</code>.</p>
     */
    inline VisibilityConditions& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key that specifies the tag that you're using to filter the search
     * results. It must be in the following format: <code>Tags.&lt;key&gt;</code>.</p>
     */
    inline VisibilityConditions& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key that specifies the tag that you're using to filter the search
     * results. It must be in the following format: <code>Tags.&lt;key&gt;</code>.</p>
     */
    inline VisibilityConditions& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value for the tag that you're using to filter the search results.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value for the tag that you're using to filter the search results.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for the tag that you're using to filter the search results.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the tag that you're using to filter the search results.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for the tag that you're using to filter the search results.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value for the tag that you're using to filter the search results.</p>
     */
    inline VisibilityConditions& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value for the tag that you're using to filter the search results.</p>
     */
    inline VisibilityConditions& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value for the tag that you're using to filter the search results.</p>
     */
    inline VisibilityConditions& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
