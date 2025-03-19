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
   * <p>Describes the codes to use when checking for a successful response from a
   * target for health checks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/Matcher">AWS
   * API Reference</a></p>
   */
  class Matcher
  {
  public:
    AWS_VPCLATTICE_API Matcher() = default;
    AWS_VPCLATTICE_API Matcher(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Matcher& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The HTTP code to use when checking for a successful response from a
     * target.</p>
     */
    inline const Aws::String& GetHttpCode() const { return m_httpCode; }
    inline bool HttpCodeHasBeenSet() const { return m_httpCodeHasBeenSet; }
    template<typename HttpCodeT = Aws::String>
    void SetHttpCode(HttpCodeT&& value) { m_httpCodeHasBeenSet = true; m_httpCode = std::forward<HttpCodeT>(value); }
    template<typename HttpCodeT = Aws::String>
    Matcher& WithHttpCode(HttpCodeT&& value) { SetHttpCode(std::forward<HttpCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_httpCode;
    bool m_httpCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
