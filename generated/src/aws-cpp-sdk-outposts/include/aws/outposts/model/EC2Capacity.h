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
    AWS_OUTPOSTS_API EC2Capacity();
    AWS_OUTPOSTS_API EC2Capacity(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API EC2Capacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The family of the EC2 capacity. </p>
     */
    inline const Aws::String& GetFamily() const{ return m_family; }

    /**
     * <p> The family of the EC2 capacity. </p>
     */
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }

    /**
     * <p> The family of the EC2 capacity. </p>
     */
    inline void SetFamily(const Aws::String& value) { m_familyHasBeenSet = true; m_family = value; }

    /**
     * <p> The family of the EC2 capacity. </p>
     */
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = std::move(value); }

    /**
     * <p> The family of the EC2 capacity. </p>
     */
    inline void SetFamily(const char* value) { m_familyHasBeenSet = true; m_family.assign(value); }

    /**
     * <p> The family of the EC2 capacity. </p>
     */
    inline EC2Capacity& WithFamily(const Aws::String& value) { SetFamily(value); return *this;}

    /**
     * <p> The family of the EC2 capacity. </p>
     */
    inline EC2Capacity& WithFamily(Aws::String&& value) { SetFamily(std::move(value)); return *this;}

    /**
     * <p> The family of the EC2 capacity. </p>
     */
    inline EC2Capacity& WithFamily(const char* value) { SetFamily(value); return *this;}


    /**
     * <p> The maximum size of the EC2 capacity. </p>
     */
    inline const Aws::String& GetMaxSize() const{ return m_maxSize; }

    /**
     * <p> The maximum size of the EC2 capacity. </p>
     */
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }

    /**
     * <p> The maximum size of the EC2 capacity. </p>
     */
    inline void SetMaxSize(const Aws::String& value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }

    /**
     * <p> The maximum size of the EC2 capacity. </p>
     */
    inline void SetMaxSize(Aws::String&& value) { m_maxSizeHasBeenSet = true; m_maxSize = std::move(value); }

    /**
     * <p> The maximum size of the EC2 capacity. </p>
     */
    inline void SetMaxSize(const char* value) { m_maxSizeHasBeenSet = true; m_maxSize.assign(value); }

    /**
     * <p> The maximum size of the EC2 capacity. </p>
     */
    inline EC2Capacity& WithMaxSize(const Aws::String& value) { SetMaxSize(value); return *this;}

    /**
     * <p> The maximum size of the EC2 capacity. </p>
     */
    inline EC2Capacity& WithMaxSize(Aws::String&& value) { SetMaxSize(std::move(value)); return *this;}

    /**
     * <p> The maximum size of the EC2 capacity. </p>
     */
    inline EC2Capacity& WithMaxSize(const char* value) { SetMaxSize(value); return *this;}


    /**
     * <p> The quantity of the EC2 capacity. </p>
     */
    inline const Aws::String& GetQuantity() const{ return m_quantity; }

    /**
     * <p> The quantity of the EC2 capacity. </p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p> The quantity of the EC2 capacity. </p>
     */
    inline void SetQuantity(const Aws::String& value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p> The quantity of the EC2 capacity. </p>
     */
    inline void SetQuantity(Aws::String&& value) { m_quantityHasBeenSet = true; m_quantity = std::move(value); }

    /**
     * <p> The quantity of the EC2 capacity. </p>
     */
    inline void SetQuantity(const char* value) { m_quantityHasBeenSet = true; m_quantity.assign(value); }

    /**
     * <p> The quantity of the EC2 capacity. </p>
     */
    inline EC2Capacity& WithQuantity(const Aws::String& value) { SetQuantity(value); return *this;}

    /**
     * <p> The quantity of the EC2 capacity. </p>
     */
    inline EC2Capacity& WithQuantity(Aws::String&& value) { SetQuantity(std::move(value)); return *this;}

    /**
     * <p> The quantity of the EC2 capacity. </p>
     */
    inline EC2Capacity& WithQuantity(const char* value) { SetQuantity(value); return *this;}

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
