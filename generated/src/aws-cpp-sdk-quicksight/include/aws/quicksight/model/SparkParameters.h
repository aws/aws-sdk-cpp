/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The parameters for Spark.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SparkParameters">AWS
   * API Reference</a></p>
   */
  class SparkParameters
  {
  public:
    AWS_QUICKSIGHT_API SparkParameters();
    AWS_QUICKSIGHT_API SparkParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SparkParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Host.</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }

    /**
     * <p>Host.</p>
     */
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    /**
     * <p>Host.</p>
     */
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>Host.</p>
     */
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>Host.</p>
     */
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }

    /**
     * <p>Host.</p>
     */
    inline SparkParameters& WithHost(const Aws::String& value) { SetHost(value); return *this;}

    /**
     * <p>Host.</p>
     */
    inline SparkParameters& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}

    /**
     * <p>Host.</p>
     */
    inline SparkParameters& WithHost(const char* value) { SetHost(value); return *this;}


    /**
     * <p>Port.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Port.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>Port.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Port.</p>
     */
    inline SparkParameters& WithPort(int value) { SetPort(value); return *this;}

  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
