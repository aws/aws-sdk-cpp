/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace PI
{
namespace Model
{

  /**
   * <p>If <code>PartitionBy</code> was specified in a
   * <code>DescribeDimensionKeys</code> request, the dimensions are returned in an
   * array. Each element in the array specifies one dimension. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/ResponsePartitionKey">AWS
   * API Reference</a></p>
   */
  class ResponsePartitionKey
  {
  public:
    AWS_PI_API ResponsePartitionKey();
    AWS_PI_API ResponsePartitionKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API ResponsePartitionKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline void SetDimensions(const Aws::Map<Aws::String, Aws::String>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline void SetDimensions(Aws::Map<Aws::String, Aws::String>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline ResponsePartitionKey& WithDimensions(const Aws::Map<Aws::String, Aws::String>& value) { SetDimensions(value); return *this;}

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline ResponsePartitionKey& WithDimensions(Aws::Map<Aws::String, Aws::String>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline ResponsePartitionKey& AddDimensions(const Aws::String& key, const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline ResponsePartitionKey& AddDimensions(Aws::String&& key, const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline ResponsePartitionKey& AddDimensions(const Aws::String& key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline ResponsePartitionKey& AddDimensions(Aws::String&& key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline ResponsePartitionKey& AddDimensions(const char* key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline ResponsePartitionKey& AddDimensions(Aws::String&& key, const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline ResponsePartitionKey& AddDimensions(const char* key, const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_dimensions;
    bool m_dimensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
