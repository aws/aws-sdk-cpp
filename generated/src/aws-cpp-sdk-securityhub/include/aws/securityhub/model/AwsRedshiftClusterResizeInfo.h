/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the resize operation for the cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterResizeInfo">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterResizeInfo
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterResizeInfo() = default;
    AWS_SECURITYHUB_API AwsRedshiftClusterResizeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterResizeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the resize operation can be canceled.</p>
     */
    inline bool GetAllowCancelResize() const { return m_allowCancelResize; }
    inline bool AllowCancelResizeHasBeenSet() const { return m_allowCancelResizeHasBeenSet; }
    inline void SetAllowCancelResize(bool value) { m_allowCancelResizeHasBeenSet = true; m_allowCancelResize = value; }
    inline AwsRedshiftClusterResizeInfo& WithAllowCancelResize(bool value) { SetAllowCancelResize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resize operation.</p> <p>Valid values: <code>ClassicResize</code>
     * </p>
     */
    inline const Aws::String& GetResizeType() const { return m_resizeType; }
    inline bool ResizeTypeHasBeenSet() const { return m_resizeTypeHasBeenSet; }
    template<typename ResizeTypeT = Aws::String>
    void SetResizeType(ResizeTypeT&& value) { m_resizeTypeHasBeenSet = true; m_resizeType = std::forward<ResizeTypeT>(value); }
    template<typename ResizeTypeT = Aws::String>
    AwsRedshiftClusterResizeInfo& WithResizeType(ResizeTypeT&& value) { SetResizeType(std::forward<ResizeTypeT>(value)); return *this;}
    ///@}
  private:

    bool m_allowCancelResize{false};
    bool m_allowCancelResizeHasBeenSet = false;

    Aws::String m_resizeType;
    bool m_resizeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
