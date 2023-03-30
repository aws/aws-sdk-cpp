/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>The codes to use when checking for a successful response from a target for
   * health checks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/Matcher">AWS
   * API Reference</a></p>
   */
  class Matcher
  {
  public:
    AWS_VPCLATTICE_API Matcher();
    AWS_VPCLATTICE_API Matcher(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Matcher& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The HTTP code to use when checking for a successful response from a
     * target.</p>
     */
    inline const Aws::String& GetHttpCode() const{ return m_httpCode; }

    /**
     * <p>The HTTP code to use when checking for a successful response from a
     * target.</p>
     */
    inline bool HttpCodeHasBeenSet() const { return m_httpCodeHasBeenSet; }

    /**
     * <p>The HTTP code to use when checking for a successful response from a
     * target.</p>
     */
    inline void SetHttpCode(const Aws::String& value) { m_httpCodeHasBeenSet = true; m_httpCode = value; }

    /**
     * <p>The HTTP code to use when checking for a successful response from a
     * target.</p>
     */
    inline void SetHttpCode(Aws::String&& value) { m_httpCodeHasBeenSet = true; m_httpCode = std::move(value); }

    /**
     * <p>The HTTP code to use when checking for a successful response from a
     * target.</p>
     */
    inline void SetHttpCode(const char* value) { m_httpCodeHasBeenSet = true; m_httpCode.assign(value); }

    /**
     * <p>The HTTP code to use when checking for a successful response from a
     * target.</p>
     */
    inline Matcher& WithHttpCode(const Aws::String& value) { SetHttpCode(value); return *this;}

    /**
     * <p>The HTTP code to use when checking for a successful response from a
     * target.</p>
     */
    inline Matcher& WithHttpCode(Aws::String&& value) { SetHttpCode(std::move(value)); return *this;}

    /**
     * <p>The HTTP code to use when checking for a successful response from a
     * target.</p>
     */
    inline Matcher& WithHttpCode(const char* value) { SetHttpCode(value); return *this;}

  private:

    Aws::String m_httpCode;
    bool m_httpCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
