/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/DescribePortfolioShareType.h>
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
   * <p>Information about the portfolio share.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/PortfolioShareDetail">AWS
   * API Reference</a></p>
   */
  class PortfolioShareDetail
  {
  public:
    AWS_SERVICECATALOG_API PortfolioShareDetail() = default;
    AWS_SERVICECATALOG_API PortfolioShareDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API PortfolioShareDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the recipient entity that received the portfolio share. The
     * recipient entity can be one of the following:</p> <p>1. An external account.</p>
     * <p>2. An organziation member account.</p> <p>3. An organzational unit (OU).</p>
     * <p>4. The organization itself. (This shares with every account in the
     * organization).</p>
     */
    inline const Aws::String& GetPrincipalId() const { return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    template<typename PrincipalIdT = Aws::String>
    void SetPrincipalId(PrincipalIdT&& value) { m_principalIdHasBeenSet = true; m_principalId = std::forward<PrincipalIdT>(value); }
    template<typename PrincipalIdT = Aws::String>
    PortfolioShareDetail& WithPrincipalId(PrincipalIdT&& value) { SetPrincipalId(std::forward<PrincipalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the portfolio share.</p>
     */
    inline DescribePortfolioShareType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DescribePortfolioShareType value) { m_typeHasBeenSet = true; m_type = value; }
    inline PortfolioShareDetail& WithType(DescribePortfolioShareType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the shared portfolio is imported by the recipient account.
     * If the recipient is in an organization node, the share is automatically
     * imported, and the field is always set to true.</p>
     */
    inline bool GetAccepted() const { return m_accepted; }
    inline bool AcceptedHasBeenSet() const { return m_acceptedHasBeenSet; }
    inline void SetAccepted(bool value) { m_acceptedHasBeenSet = true; m_accepted = value; }
    inline PortfolioShareDetail& WithAccepted(bool value) { SetAccepted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether TagOptions sharing is enabled or disabled for the portfolio
     * share.</p>
     */
    inline bool GetShareTagOptions() const { return m_shareTagOptions; }
    inline bool ShareTagOptionsHasBeenSet() const { return m_shareTagOptionsHasBeenSet; }
    inline void SetShareTagOptions(bool value) { m_shareTagOptionsHasBeenSet = true; m_shareTagOptions = value; }
    inline PortfolioShareDetail& WithShareTagOptions(bool value) { SetShareTagOptions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if <code>Principal</code> sharing is enabled or disabled for the
     * portfolio share. </p>
     */
    inline bool GetSharePrincipals() const { return m_sharePrincipals; }
    inline bool SharePrincipalsHasBeenSet() const { return m_sharePrincipalsHasBeenSet; }
    inline void SetSharePrincipals(bool value) { m_sharePrincipalsHasBeenSet = true; m_sharePrincipals = value; }
    inline PortfolioShareDetail& WithSharePrincipals(bool value) { SetSharePrincipals(value); return *this;}
    ///@}
  private:

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    DescribePortfolioShareType m_type{DescribePortfolioShareType::NOT_SET};
    bool m_typeHasBeenSet = false;

    bool m_accepted{false};
    bool m_acceptedHasBeenSet = false;

    bool m_shareTagOptions{false};
    bool m_shareTagOptionsHasBeenSet = false;

    bool m_sharePrincipals{false};
    bool m_sharePrincipalsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
