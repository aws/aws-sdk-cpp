/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p> Information about EC2 capacity. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/EC2Capacity">AWS
   * API Reference</a></p>
   */
  class EC2Capacity
  {
  public:
    AWS_OUTPOSTS_API EC2Capacity() = default;
    AWS_OUTPOSTS_API EC2Capacity(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API EC2Capacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The family of the EC2 capacity. </p>
     */
    inline const Aws::String& GetFamily() const { return m_family; }
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }
    template<typename FamilyT = Aws::String>
    void SetFamily(FamilyT&& value) { m_familyHasBeenSet = true; m_family = std::forward<FamilyT>(value); }
    template<typename FamilyT = Aws::String>
    EC2Capacity& WithFamily(FamilyT&& value) { SetFamily(std::forward<FamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum size of the EC2 capacity. </p>
     */
    inline const Aws::String& GetMaxSize() const { return m_maxSize; }
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }
    template<typename MaxSizeT = Aws::String>
    void SetMaxSize(MaxSizeT&& value) { m_maxSizeHasBeenSet = true; m_maxSize = std::forward<MaxSizeT>(value); }
    template<typename MaxSizeT = Aws::String>
    EC2Capacity& WithMaxSize(MaxSizeT&& value) { SetMaxSize(std::forward<MaxSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The quantity of the EC2 capacity. </p>
     */
    inline const Aws::String& GetQuantity() const { return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    template<typename QuantityT = Aws::String>
    void SetQuantity(QuantityT&& value) { m_quantityHasBeenSet = true; m_quantity = std::forward<QuantityT>(value); }
    template<typename QuantityT = Aws::String>
    EC2Capacity& WithQuantity(QuantityT&& value) { SetQuantity(std::forward<QuantityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_family;
    bool m_familyHasBeenSet = false;

    Aws::String m_maxSize;
    bool m_maxSizeHasBeenSet = false;

    Aws::String m_quantity;
    bool m_quantityHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
