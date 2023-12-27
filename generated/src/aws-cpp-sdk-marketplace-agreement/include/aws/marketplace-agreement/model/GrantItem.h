/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
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
namespace AgreementService
{
namespace Model
{

  /**
   * <p>Entitlements granted to the acceptor of fixed upfront as part of agreement
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/GrantItem">AWS
   * API Reference</a></p>
   */
  class GrantItem
  {
  public:
    AWS_AGREEMENTSERVICE_API GrantItem();
    AWS_AGREEMENTSERVICE_API GrantItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API GrantItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique dimension key defined in the product document. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace. </p>
     */
    inline const Aws::String& GetDimensionKey() const{ return m_dimensionKey; }

    /**
     * <p>Unique dimension key defined in the product document. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace. </p>
     */
    inline bool DimensionKeyHasBeenSet() const { return m_dimensionKeyHasBeenSet; }

    /**
     * <p>Unique dimension key defined in the product document. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace. </p>
     */
    inline void SetDimensionKey(const Aws::String& value) { m_dimensionKeyHasBeenSet = true; m_dimensionKey = value; }

    /**
     * <p>Unique dimension key defined in the product document. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace. </p>
     */
    inline void SetDimensionKey(Aws::String&& value) { m_dimensionKeyHasBeenSet = true; m_dimensionKey = std::move(value); }

    /**
     * <p>Unique dimension key defined in the product document. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace. </p>
     */
    inline void SetDimensionKey(const char* value) { m_dimensionKeyHasBeenSet = true; m_dimensionKey.assign(value); }

    /**
     * <p>Unique dimension key defined in the product document. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace. </p>
     */
    inline GrantItem& WithDimensionKey(const Aws::String& value) { SetDimensionKey(value); return *this;}

    /**
     * <p>Unique dimension key defined in the product document. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace. </p>
     */
    inline GrantItem& WithDimensionKey(Aws::String&& value) { SetDimensionKey(std::move(value)); return *this;}

    /**
     * <p>Unique dimension key defined in the product document. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace. </p>
     */
    inline GrantItem& WithDimensionKey(const char* value) { SetDimensionKey(value); return *this;}


    /**
     * <p>Maximum amount of capacity that the buyer can be entitled to the given
     * dimension of the product. If <code>MaxQuantity</code> is not provided, the buyer
     * will be able to use an unlimited amount of the given dimension. </p>
     */
    inline int GetMaxQuantity() const{ return m_maxQuantity; }

    /**
     * <p>Maximum amount of capacity that the buyer can be entitled to the given
     * dimension of the product. If <code>MaxQuantity</code> is not provided, the buyer
     * will be able to use an unlimited amount of the given dimension. </p>
     */
    inline bool MaxQuantityHasBeenSet() const { return m_maxQuantityHasBeenSet; }

    /**
     * <p>Maximum amount of capacity that the buyer can be entitled to the given
     * dimension of the product. If <code>MaxQuantity</code> is not provided, the buyer
     * will be able to use an unlimited amount of the given dimension. </p>
     */
    inline void SetMaxQuantity(int value) { m_maxQuantityHasBeenSet = true; m_maxQuantity = value; }

    /**
     * <p>Maximum amount of capacity that the buyer can be entitled to the given
     * dimension of the product. If <code>MaxQuantity</code> is not provided, the buyer
     * will be able to use an unlimited amount of the given dimension. </p>
     */
    inline GrantItem& WithMaxQuantity(int value) { SetMaxQuantity(value); return *this;}

  private:

    Aws::String m_dimensionKey;
    bool m_dimensionKeyHasBeenSet = false;

    int m_maxQuantity;
    bool m_maxQuantityHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
