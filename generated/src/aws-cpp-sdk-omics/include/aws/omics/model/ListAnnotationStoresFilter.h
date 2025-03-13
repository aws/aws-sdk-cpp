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
   * <p>A filter for annotation stores.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListAnnotationStoresFilter">AWS
   * API Reference</a></p>
   */
  class ListAnnotationStoresFilter
  {
  public:
    AWS_OMICS_API ListAnnotationStoresFilter() = default;
    AWS_OMICS_API ListAnnotationStoresFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ListAnnotationStoresFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A status to filter on.</p>
     */
    inline StoreStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StoreStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListAnnotationStoresFilter& WithStatus(StoreStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    StoreStatus m_status{StoreStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
