/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>A tag associated with an Amazon Web Services resource. Tags are key:value
   * pairs that you can use to categorize and manage your resources, for purposes
   * like billing or other management. Typically, the tag key represents a category,
   * such as "environment", and the tag value represents a specific value within that
   * category, such as "test," "development," or "production". Or you might set the
   * tag key to "customer" and the value to the customer name or ID. You can specify
   * one or more tags to add to each Amazon Web Services resource, up to 50 tags for
   * a resource.</p> <p>You can tag the Amazon Web Services resources that you manage
   * through WAF: web ACLs, rule groups, IP sets, and regex pattern sets. You can't
   * manage or view tags through the WAF console. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_WAFV2_API Tag();
    AWS_WAFV2_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag key to
     * describe a category of information, such as "customer." Tag keys are
     * case-sensitive.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag key to
     * describe a category of information, such as "customer." Tag keys are
     * case-sensitive.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag key to
     * describe a category of information, such as "customer." Tag keys are
     * case-sensitive.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag key to
     * describe a category of information, such as "customer." Tag keys are
     * case-sensitive.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag key to
     * describe a category of information, such as "customer." Tag keys are
     * case-sensitive.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag key to
     * describe a category of information, such as "customer." Tag keys are
     * case-sensitive.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag key to
     * describe a category of information, such as "customer." Tag keys are
     * case-sensitive.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag key to
     * describe a category of information, such as "customer." Tag keys are
     * case-sensitive.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
