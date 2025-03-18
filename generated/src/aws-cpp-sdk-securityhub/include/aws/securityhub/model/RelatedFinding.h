/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about a related finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RelatedFinding">AWS
   * API Reference</a></p>
   */
  class RelatedFinding
  {
  public:
    AWS_SECURITYHUB_API RelatedFinding() = default;
    AWS_SECURITYHUB_API RelatedFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RelatedFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the product that generated a related finding.</p>
     */
    inline const Aws::String& GetProductArn() const { return m_productArn; }
    inline bool ProductArnHasBeenSet() const { return m_productArnHasBeenSet; }
    template<typename ProductArnT = Aws::String>
    void SetProductArn(ProductArnT&& value) { m_productArnHasBeenSet = true; m_productArn = std::forward<ProductArnT>(value); }
    template<typename ProductArnT = Aws::String>
    RelatedFinding& WithProductArn(ProductArnT&& value) { SetProductArn(std::forward<ProductArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product-generated identifier for a related finding.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RelatedFinding& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_productArn;
    bool m_productArnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
