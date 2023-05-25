/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>

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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>Information about an action that returns a custom HTTP response.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/FixedResponseAction">AWS
   * API Reference</a></p>
   */
  class FixedResponseAction
  {
  public:
    AWS_VPCLATTICE_API FixedResponseAction();
    AWS_VPCLATTICE_API FixedResponseAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API FixedResponseAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The HTTP response code.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The HTTP response code.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The HTTP response code.</p>
     */
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The HTTP response code.</p>
     */
    inline FixedResponseAction& WithStatusCode(int value) { SetStatusCode(value); return *this;}

  private:

    int m_statusCode;
    bool m_statusCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
