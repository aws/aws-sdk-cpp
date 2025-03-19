/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/JobStatus.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>A filter for variant import jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListVariantImportJobsFilter">AWS
   * API Reference</a></p>
   */
  class ListVariantImportJobsFilter
  {
  public:
    AWS_OMICS_API ListVariantImportJobsFilter() = default;
    AWS_OMICS_API ListVariantImportJobsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ListVariantImportJobsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A status to filter on.</p>
     */
    inline JobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(JobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListVariantImportJobsFilter& WithStatus(JobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A store name to filter on.</p>
     */
    inline const Aws::String& GetStoreName() const { return m_storeName; }
    inline bool StoreNameHasBeenSet() const { return m_storeNameHasBeenSet; }
    template<typename StoreNameT = Aws::String>
    void SetStoreName(StoreNameT&& value) { m_storeNameHasBeenSet = true; m_storeName = std::forward<StoreNameT>(value); }
    template<typename StoreNameT = Aws::String>
    ListVariantImportJobsFilter& WithStoreName(StoreNameT&& value) { SetStoreName(std::forward<StoreNameT>(value)); return *this;}
    ///@}
  private:

    JobStatus m_status{JobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_storeName;
    bool m_storeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
