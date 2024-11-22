/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
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
   * <p>S3 access configuration parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/S3AccessConfig">AWS
   * API Reference</a></p>
   */
  class S3AccessConfig
  {
  public:
    AWS_OMICS_API S3AccessConfig();
    AWS_OMICS_API S3AccessConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API S3AccessConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Location of the access logs.</p>
     */
    inline const Aws::String& GetAccessLogLocation() const{ return m_accessLogLocation; }
    inline bool AccessLogLocationHasBeenSet() const { return m_accessLogLocationHasBeenSet; }
    inline void SetAccessLogLocation(const Aws::String& value) { m_accessLogLocationHasBeenSet = true; m_accessLogLocation = value; }
    inline void SetAccessLogLocation(Aws::String&& value) { m_accessLogLocationHasBeenSet = true; m_accessLogLocation = std::move(value); }
    inline void SetAccessLogLocation(const char* value) { m_accessLogLocationHasBeenSet = true; m_accessLogLocation.assign(value); }
    inline S3AccessConfig& WithAccessLogLocation(const Aws::String& value) { SetAccessLogLocation(value); return *this;}
    inline S3AccessConfig& WithAccessLogLocation(Aws::String&& value) { SetAccessLogLocation(std::move(value)); return *this;}
    inline S3AccessConfig& WithAccessLogLocation(const char* value) { SetAccessLogLocation(value); return *this;}
    ///@}
  private:

    Aws::String m_accessLogLocation;
    bool m_accessLogLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
