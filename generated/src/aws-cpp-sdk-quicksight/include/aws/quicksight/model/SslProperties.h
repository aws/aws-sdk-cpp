/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Secure Socket Layer (SSL) properties that apply when Amazon QuickSight
   * connects to your underlying data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SslProperties">AWS
   * API Reference</a></p>
   */
  class SslProperties
  {
  public:
    AWS_QUICKSIGHT_API SslProperties();
    AWS_QUICKSIGHT_API SslProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SslProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A Boolean option to control whether SSL should be disabled.</p>
     */
    inline bool GetDisableSsl() const{ return m_disableSsl; }

    /**
     * <p>A Boolean option to control whether SSL should be disabled.</p>
     */
    inline bool DisableSslHasBeenSet() const { return m_disableSslHasBeenSet; }

    /**
     * <p>A Boolean option to control whether SSL should be disabled.</p>
     */
    inline void SetDisableSsl(bool value) { m_disableSslHasBeenSet = true; m_disableSsl = value; }

    /**
     * <p>A Boolean option to control whether SSL should be disabled.</p>
     */
    inline SslProperties& WithDisableSsl(bool value) { SetDisableSsl(value); return *this;}

  private:

    bool m_disableSsl;
    bool m_disableSslHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
