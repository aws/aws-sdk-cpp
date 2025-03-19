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
    AWS_OMICS_API S3AccessConfig() = default;
    AWS_OMICS_API S3AccessConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API S3AccessConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Location of the access logs.</p>
     */
    inline const Aws::String& GetAccessLogLocation() const { return m_accessLogLocation; }
    inline bool AccessLogLocationHasBeenSet() const { return m_accessLogLocationHasBeenSet; }
    template<typename AccessLogLocationT = Aws::String>
    void SetAccessLogLocation(AccessLogLocationT&& value) { m_accessLogLocationHasBeenSet = true; m_accessLogLocation = std::forward<AccessLogLocationT>(value); }
    template<typename AccessLogLocationT = Aws::String>
    S3AccessConfig& WithAccessLogLocation(AccessLogLocationT&& value) { SetAccessLogLocation(std::forward<AccessLogLocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessLogLocation;
    bool m_accessLogLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
