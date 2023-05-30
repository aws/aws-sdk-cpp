/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Provide transition lifecycle details of Amazon Security Lake
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DataLakeLifecycleTransition">AWS
   * API Reference</a></p>
   */
  class DataLakeLifecycleTransition
  {
  public:
    AWS_SECURITYLAKE_API DataLakeLifecycleTransition();
    AWS_SECURITYLAKE_API DataLakeLifecycleTransition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeLifecycleTransition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Number of days before data transitions to a different S3 Storage Class in the
     * Amazon Security Lake object.</p>
     */
    inline int GetDays() const{ return m_days; }

    /**
     * <p>Number of days before data transitions to a different S3 Storage Class in the
     * Amazon Security Lake object.</p>
     */
    inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }

    /**
     * <p>Number of days before data transitions to a different S3 Storage Class in the
     * Amazon Security Lake object.</p>
     */
    inline void SetDays(int value) { m_daysHasBeenSet = true; m_days = value; }

    /**
     * <p>Number of days before data transitions to a different S3 Storage Class in the
     * Amazon Security Lake object.</p>
     */
    inline DataLakeLifecycleTransition& WithDays(int value) { SetDays(value); return *this;}


    /**
     * <p>The range of storage classes that you can choose from based on the data
     * access, resiliency, and cost requirements of your workloads.</p>
     */
    inline const Aws::String& GetStorageClass() const{ return m_storageClass; }

    /**
     * <p>The range of storage classes that you can choose from based on the data
     * access, resiliency, and cost requirements of your workloads.</p>
     */
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }

    /**
     * <p>The range of storage classes that you can choose from based on the data
     * access, resiliency, and cost requirements of your workloads.</p>
     */
    inline void SetStorageClass(const Aws::String& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }

    /**
     * <p>The range of storage classes that you can choose from based on the data
     * access, resiliency, and cost requirements of your workloads.</p>
     */
    inline void SetStorageClass(Aws::String&& value) { m_storageClassHasBeenSet = true; m_storageClass = std::move(value); }

    /**
     * <p>The range of storage classes that you can choose from based on the data
     * access, resiliency, and cost requirements of your workloads.</p>
     */
    inline void SetStorageClass(const char* value) { m_storageClassHasBeenSet = true; m_storageClass.assign(value); }

    /**
     * <p>The range of storage classes that you can choose from based on the data
     * access, resiliency, and cost requirements of your workloads.</p>
     */
    inline DataLakeLifecycleTransition& WithStorageClass(const Aws::String& value) { SetStorageClass(value); return *this;}

    /**
     * <p>The range of storage classes that you can choose from based on the data
     * access, resiliency, and cost requirements of your workloads.</p>
     */
    inline DataLakeLifecycleTransition& WithStorageClass(Aws::String&& value) { SetStorageClass(std::move(value)); return *this;}

    /**
     * <p>The range of storage classes that you can choose from based on the data
     * access, resiliency, and cost requirements of your workloads.</p>
     */
    inline DataLakeLifecycleTransition& WithStorageClass(const char* value) { SetStorageClass(value); return *this;}

  private:

    int m_days;
    bool m_daysHasBeenSet = false;

    Aws::String m_storageClass;
    bool m_storageClassHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
