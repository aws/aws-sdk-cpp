/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Attempts made to a access domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/Hits">AWS
   * API Reference</a></p>
   */
  class Hits
  {
  public:
    AWS_NETWORKFIREWALL_API Hits() = default;
    AWS_NETWORKFIREWALL_API Hits(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Hits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of attempts made to access a domain.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline Hits& WithCount(int value) { SetCount(value); return *this;}
    ///@}
  private:

    int m_count{0};
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
