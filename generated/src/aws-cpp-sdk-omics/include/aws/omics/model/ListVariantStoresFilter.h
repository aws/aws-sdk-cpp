/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/StoreStatus.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>A filter for variant stores.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListVariantStoresFilter">AWS
   * API Reference</a></p>
   */
  class ListVariantStoresFilter
  {
  public:
    AWS_OMICS_API ListVariantStoresFilter();
    AWS_OMICS_API ListVariantStoresFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ListVariantStoresFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A status to filter on.</p>
     */
    inline const StoreStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A status to filter on.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A status to filter on.</p>
     */
    inline void SetStatus(const StoreStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A status to filter on.</p>
     */
    inline void SetStatus(StoreStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A status to filter on.</p>
     */
    inline ListVariantStoresFilter& WithStatus(const StoreStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A status to filter on.</p>
     */
    inline ListVariantStoresFilter& WithStatus(StoreStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    StoreStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
