/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
   * <p>A range of ports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/PortRangeFromTo">AWS
   * API Reference</a></p>
   */
  class PortRangeFromTo
  {
  public:
    AWS_SECURITYHUB_API PortRangeFromTo();
    AWS_SECURITYHUB_API PortRangeFromTo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API PortRangeFromTo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The first port in the port range.</p>
     */
    inline int GetFrom() const{ return m_from; }

    /**
     * <p>The first port in the port range.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>The first port in the port range.</p>
     */
    inline void SetFrom(int value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The first port in the port range.</p>
     */
    inline PortRangeFromTo& WithFrom(int value) { SetFrom(value); return *this;}


    /**
     * <p>The last port in the port range.</p>
     */
    inline int GetTo() const{ return m_to; }

    /**
     * <p>The last port in the port range.</p>
     */
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }

    /**
     * <p>The last port in the port range.</p>
     */
    inline void SetTo(int value) { m_toHasBeenSet = true; m_to = value; }

    /**
     * <p>The last port in the port range.</p>
     */
    inline PortRangeFromTo& WithTo(int value) { SetTo(value); return *this;}

  private:

    int m_from;
    bool m_fromHasBeenSet = false;

    int m_to;
    bool m_toHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
