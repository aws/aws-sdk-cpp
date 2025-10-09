/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ClientCredentialsGrantDetails.h>
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
   * <p>Details for OAuth 2.0 client credentials grant authentication.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ClientCredentialsDetails">AWS
   * API Reference</a></p>
   */
  class ClientCredentialsDetails
  {
  public:
    AWS_QUICKSIGHT_API ClientCredentialsDetails() = default;
    AWS_QUICKSIGHT_API ClientCredentialsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ClientCredentialsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OAuth2 client credentials grant configuration details for
     * authentication.</p>
     */
    inline const ClientCredentialsGrantDetails& GetClientCredentialsGrantDetails() const { return m_clientCredentialsGrantDetails; }
    inline bool ClientCredentialsGrantDetailsHasBeenSet() const { return m_clientCredentialsGrantDetailsHasBeenSet; }
    template<typename ClientCredentialsGrantDetailsT = ClientCredentialsGrantDetails>
    void SetClientCredentialsGrantDetails(ClientCredentialsGrantDetailsT&& value) { m_clientCredentialsGrantDetailsHasBeenSet = true; m_clientCredentialsGrantDetails = std::forward<ClientCredentialsGrantDetailsT>(value); }
    template<typename ClientCredentialsGrantDetailsT = ClientCredentialsGrantDetails>
    ClientCredentialsDetails& WithClientCredentialsGrantDetails(ClientCredentialsGrantDetailsT&& value) { SetClientCredentialsGrantDetails(std::forward<ClientCredentialsGrantDetailsT>(value)); return *this;}
    ///@}
  private:

    ClientCredentialsGrantDetails m_clientCredentialsGrantDetails;
    bool m_clientCredentialsGrantDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
