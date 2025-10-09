/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ReadClientCredentialsDetails.h>
#include <aws/quicksight/model/ClientCredentialsSource.h>
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
   * <p>Read-only metadata for OAuth2 client credentials grant authentication
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReadClientCredentialsGrantMetadata">AWS
   * API Reference</a></p>
   */
  class ReadClientCredentialsGrantMetadata
  {
  public:
    AWS_QUICKSIGHT_API ReadClientCredentialsGrantMetadata() = default;
    AWS_QUICKSIGHT_API ReadClientCredentialsGrantMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ReadClientCredentialsGrantMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base endpoint URL for the OAuth2 client credentials grant flow.</p>
     */
    inline const Aws::String& GetBaseEndpoint() const { return m_baseEndpoint; }
    inline bool BaseEndpointHasBeenSet() const { return m_baseEndpointHasBeenSet; }
    template<typename BaseEndpointT = Aws::String>
    void SetBaseEndpoint(BaseEndpointT&& value) { m_baseEndpointHasBeenSet = true; m_baseEndpoint = std::forward<BaseEndpointT>(value); }
    template<typename BaseEndpointT = Aws::String>
    ReadClientCredentialsGrantMetadata& WithBaseEndpoint(BaseEndpointT&& value) { SetBaseEndpoint(std::forward<BaseEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read-only client credentials configuration details.</p>
     */
    inline const ReadClientCredentialsDetails& GetReadClientCredentialsDetails() const { return m_readClientCredentialsDetails; }
    inline bool ReadClientCredentialsDetailsHasBeenSet() const { return m_readClientCredentialsDetailsHasBeenSet; }
    template<typename ReadClientCredentialsDetailsT = ReadClientCredentialsDetails>
    void SetReadClientCredentialsDetails(ReadClientCredentialsDetailsT&& value) { m_readClientCredentialsDetailsHasBeenSet = true; m_readClientCredentialsDetails = std::forward<ReadClientCredentialsDetailsT>(value); }
    template<typename ReadClientCredentialsDetailsT = ReadClientCredentialsDetails>
    ReadClientCredentialsGrantMetadata& WithReadClientCredentialsDetails(ReadClientCredentialsDetailsT&& value) { SetReadClientCredentialsDetails(std::forward<ReadClientCredentialsDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of client credentials for the OAuth2 client credentials grant
     * flow.</p>
     */
    inline ClientCredentialsSource GetClientCredentialsSource() const { return m_clientCredentialsSource; }
    inline bool ClientCredentialsSourceHasBeenSet() const { return m_clientCredentialsSourceHasBeenSet; }
    inline void SetClientCredentialsSource(ClientCredentialsSource value) { m_clientCredentialsSourceHasBeenSet = true; m_clientCredentialsSource = value; }
    inline ReadClientCredentialsGrantMetadata& WithClientCredentialsSource(ClientCredentialsSource value) { SetClientCredentialsSource(value); return *this;}
    ///@}
  private:

    Aws::String m_baseEndpoint;
    bool m_baseEndpointHasBeenSet = false;

    ReadClientCredentialsDetails m_readClientCredentialsDetails;
    bool m_readClientCredentialsDetailsHasBeenSet = false;

    ClientCredentialsSource m_clientCredentialsSource{ClientCredentialsSource::NOT_SET};
    bool m_clientCredentialsSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
