/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/VersionStatus.h>
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
   * <p> Use filters to focus the returned annotation store versions on a specific
   * parameter, such as the status of the annotation store. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListAnnotationStoreVersionsFilter">AWS
   * API Reference</a></p>
   */
  class ListAnnotationStoreVersionsFilter
  {
  public:
    AWS_OMICS_API ListAnnotationStoreVersionsFilter();
    AWS_OMICS_API ListAnnotationStoreVersionsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ListAnnotationStoreVersionsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The status of an annotation store version. </p>
     */
    inline const VersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline void SetStatus(const VersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline void SetStatus(VersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline ListAnnotationStoreVersionsFilter& WithStatus(const VersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline ListAnnotationStoreVersionsFilter& WithStatus(VersionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    VersionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
