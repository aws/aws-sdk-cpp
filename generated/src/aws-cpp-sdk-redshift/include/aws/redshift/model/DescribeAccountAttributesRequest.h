/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class DescribeAccountAttributesRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeAccountAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAccountAttributes"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A list of attribute names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributeNames() const{ return m_attributeNames; }

    /**
     * <p>A list of attribute names.</p>
     */
    inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }

    /**
     * <p>A list of attribute names.</p>
     */
    inline void SetAttributeNames(const Aws::Vector<Aws::String>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    /**
     * <p>A list of attribute names.</p>
     */
    inline void SetAttributeNames(Aws::Vector<Aws::String>&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = std::move(value); }

    /**
     * <p>A list of attribute names.</p>
     */
    inline DescribeAccountAttributesRequest& WithAttributeNames(const Aws::Vector<Aws::String>& value) { SetAttributeNames(value); return *this;}

    /**
     * <p>A list of attribute names.</p>
     */
    inline DescribeAccountAttributesRequest& WithAttributeNames(Aws::Vector<Aws::String>&& value) { SetAttributeNames(std::move(value)); return *this;}

    /**
     * <p>A list of attribute names.</p>
     */
    inline DescribeAccountAttributesRequest& AddAttributeNames(const Aws::String& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

    /**
     * <p>A list of attribute names.</p>
     */
    inline DescribeAccountAttributesRequest& AddAttributeNames(Aws::String&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of attribute names.</p>
     */
    inline DescribeAccountAttributesRequest& AddAttributeNames(const char* value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_attributeNames;
    bool m_attributeNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
