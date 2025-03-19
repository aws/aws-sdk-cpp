/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/PrincipalType.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a principal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/Principal">AWS
   * API Reference</a></p>
   */
  class Principal
  {
  public:
    AWS_SERVICECATALOG_API Principal() = default;
    AWS_SERVICECATALOG_API Principal(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Principal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the principal (user, role, or group). This field allows for an ARN
     * with no <code>accountID</code>, with or without wildcard characters if the
     * <code>PrincipalType</code> is an <code>IAM_PATTERN</code>. </p> <p>For more
     * information, review <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/servicecatalog/associate-principal-with-portfolio.html#options">associate-principal-with-portfolio</a>
     * in the Amazon Web Services CLI Command Reference. </p>
     */
    inline const Aws::String& GetPrincipalARN() const { return m_principalARN; }
    inline bool PrincipalARNHasBeenSet() const { return m_principalARNHasBeenSet; }
    template<typename PrincipalARNT = Aws::String>
    void SetPrincipalARN(PrincipalARNT&& value) { m_principalARNHasBeenSet = true; m_principalARN = std::forward<PrincipalARNT>(value); }
    template<typename PrincipalARNT = Aws::String>
    Principal& WithPrincipalARN(PrincipalARNT&& value) { SetPrincipalARN(std::forward<PrincipalARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal type. The supported value is <code>IAM</code> if you use a
     * fully defined ARN, or <code>IAM_PATTERN</code> if you use an ARN with no
     * <code>accountID</code>, with or without wildcard characters. </p>
     */
    inline PrincipalType GetPrincipalType() const { return m_principalType; }
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
    inline void SetPrincipalType(PrincipalType value) { m_principalTypeHasBeenSet = true; m_principalType = value; }
    inline Principal& WithPrincipalType(PrincipalType value) { SetPrincipalType(value); return *this;}
    ///@}
  private:

    Aws::String m_principalARN;
    bool m_principalARNHasBeenSet = false;

    PrincipalType m_principalType{PrincipalType::NOT_SET};
    bool m_principalTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
