/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/model/CacheReportFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A list of filter parameters and associated values that determine which files
   * are included or excluded from a cache report created by a
   * <code>StartCacheReport</code> request. Multiple instances of the same filter
   * parameter are combined with an OR operation, while different parameters are
   * combined with an AND operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CacheReportFilter">AWS
   * API Reference</a></p>
   */
  class CacheReportFilter
  {
  public:
    AWS_STORAGEGATEWAY_API CacheReportFilter();
    AWS_STORAGEGATEWAY_API CacheReportFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API CacheReportFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameter name for a filter that determines which files are included or
     * excluded from a cache report.</p> <p> <b>Valid Names:</b> </p>
     * <p>UploadFailureReason | UploadState</p>
     */
    inline const CacheReportFilterName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const CacheReportFilterName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(CacheReportFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline CacheReportFilter& WithName(const CacheReportFilterName& value) { SetName(value); return *this;}
    inline CacheReportFilter& WithName(CacheReportFilterName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter value for a filter that determines which files are included or
     * excluded from a cache report.</p> <p> <b>Valid <code>UploadFailureReason</code>
     * Values:</b> </p> <p> <code>InaccessibleStorageClass</code> |
     * <code>InvalidObjectState</code> | <code>ObjectMissing</code> |
     * <code>S3AccessDenied</code> </p> <p> <b>Valid <code>UploadState</code>
     * Values:</b> </p> <p> <code>FailingUpload</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline CacheReportFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline CacheReportFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline CacheReportFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline CacheReportFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline CacheReportFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    CacheReportFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
