﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/model/MagneticStoreRejectedDataLocation.h>
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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p>The set of properties on a table for configuring magnetic store
   * writes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/MagneticStoreWriteProperties">AWS
   * API Reference</a></p>
   */
  class MagneticStoreWriteProperties
  {
  public:
    AWS_TIMESTREAMWRITE_API MagneticStoreWriteProperties() = default;
    AWS_TIMESTREAMWRITE_API MagneticStoreWriteProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API MagneticStoreWriteProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A flag to enable magnetic store writes.</p>
     */
    inline bool GetEnableMagneticStoreWrites() const { return m_enableMagneticStoreWrites; }
    inline bool EnableMagneticStoreWritesHasBeenSet() const { return m_enableMagneticStoreWritesHasBeenSet; }
    inline void SetEnableMagneticStoreWrites(bool value) { m_enableMagneticStoreWritesHasBeenSet = true; m_enableMagneticStoreWrites = value; }
    inline MagneticStoreWriteProperties& WithEnableMagneticStoreWrites(bool value) { SetEnableMagneticStoreWrites(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location to write error reports for records rejected asynchronously
     * during magnetic store writes.</p>
     */
    inline const MagneticStoreRejectedDataLocation& GetMagneticStoreRejectedDataLocation() const { return m_magneticStoreRejectedDataLocation; }
    inline bool MagneticStoreRejectedDataLocationHasBeenSet() const { return m_magneticStoreRejectedDataLocationHasBeenSet; }
    template<typename MagneticStoreRejectedDataLocationT = MagneticStoreRejectedDataLocation>
    void SetMagneticStoreRejectedDataLocation(MagneticStoreRejectedDataLocationT&& value) { m_magneticStoreRejectedDataLocationHasBeenSet = true; m_magneticStoreRejectedDataLocation = std::forward<MagneticStoreRejectedDataLocationT>(value); }
    template<typename MagneticStoreRejectedDataLocationT = MagneticStoreRejectedDataLocation>
    MagneticStoreWriteProperties& WithMagneticStoreRejectedDataLocation(MagneticStoreRejectedDataLocationT&& value) { SetMagneticStoreRejectedDataLocation(std::forward<MagneticStoreRejectedDataLocationT>(value)); return *this;}
    ///@}
  private:

    bool m_enableMagneticStoreWrites{false};
    bool m_enableMagneticStoreWritesHasBeenSet = false;

    MagneticStoreRejectedDataLocation m_magneticStoreRejectedDataLocation;
    bool m_magneticStoreRejectedDataLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
