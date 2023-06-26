/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>

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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>Custom volume configuration for the root volumes that are attached to
   * streaming sessions.</p> <p>This parameter is only allowed when
   * <code>sessionPersistenceMode</code> is <code>ACTIVATED</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/VolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class VolumeConfiguration
  {
  public:
    AWS_NIMBLESTUDIO_API VolumeConfiguration();
    AWS_NIMBLESTUDIO_API VolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API VolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of I/O operations per second for the root volume that is attached
     * to streaming session.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The number of I/O operations per second for the root volume that is attached
     * to streaming session.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The number of I/O operations per second for the root volume that is attached
     * to streaming session.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The number of I/O operations per second for the root volume that is attached
     * to streaming session.</p>
     */
    inline VolumeConfiguration& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The size of the root volume that is attached to the streaming session. The
     * root volume size is measured in GiBs.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The size of the root volume that is attached to the streaming session. The
     * root volume size is measured in GiBs.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size of the root volume that is attached to the streaming session. The
     * root volume size is measured in GiBs.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the root volume that is attached to the streaming session. The
     * root volume size is measured in GiBs.</p>
     */
    inline VolumeConfiguration& WithSize(int value) { SetSize(value); return *this;}


    /**
     * <p>The throughput to provision for the root volume that is attached to the
     * streaming session. The throughput is measured in MiB/s.</p>
     */
    inline int GetThroughput() const{ return m_throughput; }

    /**
     * <p>The throughput to provision for the root volume that is attached to the
     * streaming session. The throughput is measured in MiB/s.</p>
     */
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }

    /**
     * <p>The throughput to provision for the root volume that is attached to the
     * streaming session. The throughput is measured in MiB/s.</p>
     */
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }

    /**
     * <p>The throughput to provision for the root volume that is attached to the
     * streaming session. The throughput is measured in MiB/s.</p>
     */
    inline VolumeConfiguration& WithThroughput(int value) { SetThroughput(value); return *this;}

  private:

    int m_iops;
    bool m_iopsHasBeenSet = false;

    int m_size;
    bool m_sizeHasBeenSet = false;

    int m_throughput;
    bool m_throughputHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
