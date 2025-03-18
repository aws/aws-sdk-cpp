/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/FindingHistoryUpdateSourceType.h>
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
   * <p> Identifies the source of the finding change event. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FindingHistoryUpdateSource">AWS
   * API Reference</a></p>
   */
  class FindingHistoryUpdateSource
  {
  public:
    AWS_SECURITYHUB_API FindingHistoryUpdateSource() = default;
    AWS_SECURITYHUB_API FindingHistoryUpdateSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API FindingHistoryUpdateSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Describes the type of finding change event, such as a call to <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a> (by an integrated Amazon Web Services
     * service or third party partner integration) or <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a> (by a Security Hub customer). </p>
     */
    inline FindingHistoryUpdateSourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FindingHistoryUpdateSourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FindingHistoryUpdateSource& WithType(FindingHistoryUpdateSourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identity of the source that initiated the finding change event. For
     * example, the Amazon Resource Name (ARN) of a partner that calls
     * BatchImportFindings or of a customer that calls BatchUpdateFindings. </p>
     */
    inline const Aws::String& GetIdentity() const { return m_identity; }
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
    template<typename IdentityT = Aws::String>
    void SetIdentity(IdentityT&& value) { m_identityHasBeenSet = true; m_identity = std::forward<IdentityT>(value); }
    template<typename IdentityT = Aws::String>
    FindingHistoryUpdateSource& WithIdentity(IdentityT&& value) { SetIdentity(std::forward<IdentityT>(value)); return *this;}
    ///@}
  private:

    FindingHistoryUpdateSourceType m_type{FindingHistoryUpdateSourceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_identity;
    bool m_identityHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
